#include <WiFi.h>
#include <HTTPClient.h>
#include <Wire.h>
#include <SPI.h>
#include <MFRC522.h>
#include <ESP32Servo.h>
#include <WebServer.h>

#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Clcd.h>

// =====================================================
// LCD
// =====================================================
hd44780_I2Clcd lcd(0x3E);

// =====================================================
// WEB SERVER
// =====================================================
WebServer server(80);

// =====================================================
// WIFI
// =====================================================
const char* ssid = "HomeFi";
const char* password = "12341234";

// =====================================================
// STATIC IP
// =====================================================
IPAddress local_IP(10,129,253,151);
IPAddress gateway(10,129,253,1);
IPAddress subnet(255,255,255,0);

// =====================================================
// ENTRY ESP32 IP
// =====================================================
String entryESP_IP = "10.129.253.150";

// =====================================================
// EXIT CAMERA IP
// =====================================================
String camIP = "10.129.253.170";//10.233.58.170

// =====================================================
// PINS
// =====================================================
#define TRIG_PIN       25
#define ECHO_PIN       26
#define IR_PIN         27

#define GATE_SERVO     32
#define ROTATE_SERVO   33

// RFID
#define SS_PIN         5
#define RST_PIN        4

// =====================================================
// RFID OBJECT
// =====================================================
MFRC522 rfid(SS_PIN, RST_PIN);

// =====================================================
// SERVO OBJECTS
// =====================================================
Servo gateServo;
Servo rotateServo;

// =====================================================
// VARIABLES
// =====================================================
int availableSlots = 4;

bool carDetected = false;
bool rfidVerified = false;

// =====================================================
// RFID TAGS
// =====================================================
String validUIDs[4] =
{
    "930C0007",
    "2544E206",
    "4426E106",
    "05AD4D06"
};

String carNames[4] =
{
    "Volkswagan",
    "Hundai",
    "Toyota",
    "BMW"
};

// =====================================================
// READ DISTANCE
// =====================================================
float readDistance()
{
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);

    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH, 30000);

    float distance = duration * 0.034 / 2.0;

    return distance;
}

// =====================================================
// LCD UPDATE
// =====================================================
void updateLCD()
{
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("EXIT SYSTEM");

    lcd.setCursor(0,1);
    lcd.print("SLOTS:");
    lcd.print(availableSlots);
}

// =====================================================
// SEND SLOT TO ENTRY
// =====================================================
void sendSlotToEntry()
{
    HTTPClient http;

    String url =
    "http://" +
    entryESP_IP +
    "/update?slots=" +
    String(availableSlots);

    Serial.println(url);

    http.begin(url);

    int httpCode = http.GET();

    Serial.print("ENTRY HTTP: ");
    Serial.println(httpCode);

    http.end();
}

// =====================================================
// RECEIVE SLOT UPDATE
// =====================================================
void handleSlotUpdate()
{
    if(server.hasArg("slots"))
    {
        availableSlots = server.arg("slots").toInt();

        Serial.print("UPDATED SLOTS: ");
        Serial.println(availableSlots);

        updateLCD();

        server.send(200, "text/plain", "OK");
    }
}

// =====================================================
// CAMERA TRIGGER
// =====================================================
void triggerCamera()
{
    HTTPClient http;

    String url = "http://" + camIP + "/capture";

    Serial.println(url);

    http.begin(url);

    int httpCode = http.GET();

    Serial.print("HTTP CODE: ");
    Serial.println(httpCode);

    if(httpCode > 0)
    {
        String payload = http.getString();

        Serial.println(payload);
    }

    http.end();
}

// =====================================================
// ROTATE SERVO ACTION
// =====================================================
// void rotateServoAction()
// {
//     for(int i = 0; i < 4; i++)
//     {
//         rotateServo.write(20);
//         delay(300);

//         rotateServo.write(0);
//         delay(300);
//     }
// }
void rotateServoAction()
{
    int angle = availableSlots * 20;

    if (angle > 80)
        angle = 80;

    Serial.print("Rotate Servo Angle: ");
    Serial.println(angle);

    rotateServo.write(angle);
    delay(1000);
}

// =====================================================
// OPEN GATE
// =====================================================
void openGate()
{
    Serial.println("OPENING GATE");

    gateServo.write(90);

    rotateServoAction();

    delay(5000);

    gateServo.write(0);

    Serial.println("GATE CLOSED");
}

// =====================================================
// CHECK RFID
// =====================================================
bool checkRFID()
{
    if(!rfid.PICC_IsNewCardPresent())
    {
        return false;
    }

    if(!rfid.PICC_ReadCardSerial())
    {
        return false;
    }

    String uid = "";

    for(byte i = 0; i < rfid.uid.size; i++)
    {
        if(rfid.uid.uidByte[i] < 0x10)
        {
            uid += "0";
        }

        uid += String(rfid.uid.uidByte[i], HEX);
    }

    uid.toUpperCase();

    Serial.print("UID: ");
    Serial.println(uid);

    for(int i = 0; i < 4; i++)
    {
        if(uid == validUIDs[i])
        {
            lcd.clear();

            lcd.setCursor(0,0);
            lcd.print("WELCOME");

            lcd.setCursor(0,1);
            lcd.print(carNames[i]);

            delay(2000);

            return true;
        }
    }

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("INVALID CARD");

    delay(2000);

    updateLCD();

    return false;
}

// =====================================================
// SETUP
// =====================================================
void setup()
{
    Serial.begin(115200);

    // =====================================================
    // PIN MODES
    // =====================================================
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    pinMode(IR_PIN, INPUT);

    // =====================================================
    // I2C
    // =====================================================
    Wire.begin(21,22);

    // =====================================================
    // LCD
    // =====================================================
    int status = lcd.begin(16,2);

    if(status)
    {
        Serial.print("LCD FAILED: ");
        Serial.println(status);

        while(1);
    }

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("CONNECT WIFI");

    // =====================================================
    // SERVOS
    // =====================================================
    gateServo.attach(GATE_SERVO);
    rotateServo.attach(ROTATE_SERVO);

    gateServo.write(0);
    rotateServo.write(0);

    // =====================================================
    // RFID
    // =====================================================
    SPI.begin();

    rfid.PCD_Init();

    Serial.println("RFID READY");

    // =====================================================
    // WIFI STATIC IP
    // =====================================================
    WiFi.config(local_IP, gateway, subnet);

    WiFi.begin(ssid, password);

    Serial.print("Connecting WiFi");

    while(WiFi.status() != WL_CONNECTED)
    {
        delay(500);

        Serial.print(".");
    }

    Serial.println();
    Serial.println("WiFi Connected");

    Serial.print("EXIT IP: ");
    Serial.println(WiFi.localIP());

    // =====================================================
    // SERVER
    // =====================================================
    server.on("/update", handleSlotUpdate);

    server.begin();

    Serial.println("EXIT SERVER STARTED");

    // =====================================================
    // LCD
    // =====================================================
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("WIFI CONNECTED");

    delay(2000);

    updateLCD();
}

// =====================================================
// LOOP
// =====================================================
void loop()
{
    server.handleClient();

    float distance = readDistance();

    Serial.print("Distance: ");
    Serial.println(distance);

    // =====================================================
    // CAR DETECT
    // =====================================================
    if(distance < 20 && !carDetected)
    {
        carDetected = true;

        lcd.clear();

        lcd.setCursor(0,0);
        lcd.print("SCAN RFID");

        lcd.setCursor(0,1);
        lcd.print("TO EXIT");

        Serial.println("CAR DETECTED");
    }

    // =====================================================
    // RFID VERIFY
    // =====================================================
    if(carDetected && !rfidVerified)
    {
        if(checkRFID())
        {
            rfidVerified = true;

            Serial.println("RFID VERIFIED");

            lcd.clear();

            lcd.setCursor(0,0);
            lcd.print("CAPTURING...");

            triggerCamera();

            delay(2000);
        }
    }

    // =====================================================
    // IR DETECT
    // =====================================================
    if(carDetected && rfidVerified)
    {
        if(digitalRead(IR_PIN) == LOW)
        {
            Serial.println("IR DETECTED");

            lcd.clear();

            lcd.setCursor(0,0);
            lcd.print("EXIT GRANTED");

            // =================================================
            // SLOT INCREASE
            // =================================================
            if(availableSlots < 4)
            {
                availableSlots++;

                // SEND TO ENTRY
                sendSlotToEntry();
            }

            updateLCD();

            // =================================================
            // OPEN GATE
            // =================================================
            openGate();

            // RESET
            carDetected = false;
            rfidVerified = false;
        }
    }

    delay(100);
}