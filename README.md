# 🚗 IoT-Based Automated Circular Underground Car Parking System

## Helix-Spin Dynamics

An innovative **IoT-Based Automated Circular Underground Car Parking System** that maximizes underground parking capacity using **IoT, Automation, Cloud Computing, AI-ready architecture, Hydraulic Lift Technology, and Circular Rotating Parking Racks**.

The latest version of the project also introduces **AI-Based Predictive Parking Allocation and Traffic Optimization**, which intelligently predicts parking demand, optimizes parking slot allocation, retrieval sequencing, and hydraulic lift/rack movements in real time using existing sensors and cloud data to minimize waiting time and energy consumption.

---

# 👥 Team Information

**Team Name:** CREVIOTICS

**Team ID:** RH-0036

### Team Lead

* Kavinraj R

### Team Members

* Rupesh S Nair
* Praveen S
* Guhan D
* Harish S

---

# 📌 Project Overview

Rapid urbanization has significantly increased the number of vehicles, creating severe parking shortages in cities.

Traditional parking systems:

* Consume large land areas
* Cause traffic congestion
* Increase fuel consumption
* Waste drivers' time
* Lack real-time monitoring
* Have limited security
* Require manual operation

Our project introduces an **Automated Circular Underground Parking System** capable of storing **200 vehicles** within a compact underground circular structure.

The enhanced system incorporates **Artificial Intelligence (AI)** to predict parking demand, optimize slot allocation, intelligently schedule vehicle retrieval, and coordinate hydraulic lift and rotating rack movements. By utilizing existing IoT sensors and cloud-based data, the system minimizes waiting time, reduces energy consumption, and improves the overall efficiency of parking operations.

---

# 🎯 Problem Statement

The existing parking systems suffer from:

* Lack of parking spaces
* Traffic congestion
* Time-consuming parking search
* Manual management
* Poor land utilization
* Vehicle theft risks
* No real-time slot monitoring
* Increased carbon emissions
* Limited scalability
* Not suitable for Smart Cities

---

# 💡 Proposed Solution

The proposed system consists of:

* 25 Underground Circular Parking Levels
* 8 Parking Slots per Level
* Total Capacity = **200 Vehicles**

The system automatically:

* Detects incoming vehicles
* Assigns available slots
* Generates RFID/QR authentication
* Stores vehicle details in Cloud
* Moves parking platform using Hydraulic Lift
* Rotates parking deck automatically
* Retrieves vehicle on authentication
* Calculates parking charges
* Updates parking availability in real-time

In addition, the AI engine continuously analyzes real-time sensor data and cloud information to:

* Predict future parking demand
* Optimize parking slot allocation
* Schedule intelligent vehicle retrieval
* Optimize hydraulic lift movement
* Optimize rotating rack movement
* Reduce waiting time
* Minimize energy consumption
* Improve overall parking efficiency

---

# ✨ Key Features

* Circular Underground Parking
* Hydraulic Lift System
* 360° Rotating Parking Rack
* RFID Authentication
* QR Code Authentication
* ESP32-CAM Vehicle Monitoring
* Ultrasonic Vehicle Detection
* IR Slot Detection
* LCD Live Parking Status
* Cloud Database
* Telegram Notification
* Automated Billing
* AI Ready Architecture
* AI-Based Predictive Parking Demand
* Intelligent Parking Slot Allocation
* AI Vehicle Retrieval Sequencing
* Hydraulic Lift Movement Optimization
* Circular Rack Rotation Optimization
* Real-Time Traffic Optimization
* Cloud-Based Parking Analytics
* Intelligent Energy Optimization

---

# 🎯 Objectives

## Primary Objectives

* Maximize underground parking capacity
* Reduce land usage
* Fully automate parking
* Reduce traffic congestion
* Improve vehicle security
* Reduce retrieval time
* Enable real-time parking monitoring

## Secondary Objectives

* Cloud-based monitoring
* Smart City integration
* AI-based parking prediction
* Cost reduction
* Sustainable infrastructure
* AI-based traffic optimization
* Intelligent parking allocation
* Energy-efficient parking operations

---

# 🏗 System Architecture

```
Vehicle

↓

Ultrasonic Sensor

↓

ESP32 Controller

↓

Cloud Database

↓

AI Prediction Engine

↓

Parking Management System

↓

Hydraulic Lift

↓

Rotating Parking Rack

↓

Parking Slot

↓

LCD Display

↓

Telegram Notification
```

---

# ⚙ Technical Workflow

## Vehicle Parking

1. Vehicle arrives
2. Ultrasonic sensor detects vehicle
3. ESP32-CAM captures image
4. Empty slot identified using IR sensors
5. AI predicts the most suitable parking slot
6. QR/RFID generated
7. Hydraulic lift moves platform using optimized path
8. Rotating rack aligns parking slot using minimum rotation
9. Servo gate opens
10. Vehicle parked
11. Cloud database updated

---

## Vehicle Retrieval

1. User scans RFID / QR
2. Vehicle verified
3. Cloud identifies slot
4. AI schedules optimal retrieval sequence
5. Hydraulic lift moves platform
6. Rack rotates using shortest rotation path
7. Camera verifies vehicle
8. Payment calculated
9. Gate opens
10. Vehicle exits
11. Slot becomes available
12. AI updates parking statistics

---

# 🤖 AI-Based Predictive Parking Allocation and Traffic Optimization

The upgraded system introduces intelligent AI capabilities that continuously analyze sensor inputs and cloud data to improve parking efficiency.

## AI-Based Predictive Parking Demand

* Predicts peak parking hours
* Estimates future parking demand
* Identifies occupancy trends
* Improves parking readiness

---

## Intelligent Parking Slot Allocation

AI selects the most suitable parking slot by considering:

* Slot availability
* Lift position
* Rack position
* Vehicle queue
* Parking efficiency
* Traffic conditions

---

## AI Vehicle Retrieval Sequencing

The system intelligently schedules multiple vehicle retrieval requests by:

* Grouping nearby parking layers
* Reducing hydraulic lift movement
* Reducing rack rotation
* Improving retrieval speed

---

## Hydraulic Lift Optimization

AI optimizes hydraulic lift movements by:

* Calculating shortest travel path
* Reducing unnecessary movements
* Improving lift efficiency
* Lowering energy consumption

---

## Rotating Rack Optimization

The AI calculates the minimum rotation angle required to retrieve a vehicle, reducing motor usage and retrieval time.

---

## Real-Time Traffic Optimization

The system continuously monitors:

* Entry traffic
* Exit traffic
* Parking occupancy
* Vehicle queue
* Sensor status
* Lift position
* Rack position

This enables dynamic traffic management and smooth parking operations.

---

## Cloud-Based Parking Analytics

Cloud data is used for:

* Parking history analysis
* Occupancy reports
* Vehicle tracking
* Performance monitoring
* AI model improvement

---

## Intelligent Energy Optimization

The AI minimizes energy consumption through:

* Reduced lift movement
* Optimized rack rotation
* Smart parking allocation
* Efficient motor scheduling

---

# 🛠 Hardware Components

| Component         | Purpose             |
| ----------------- | ------------------- |
| ESP32             | Main Controller     |
| ESP32-CAM         | Vehicle Monitoring  |
| Ultrasonic Sensor | Vehicle Detection   |
| IR Sensor         | Slot Detection      |
| RFID Reader       | Authentication      |
| QR Scanner        | Vehicle Retrieval   |
| Servo Motor       | Gate Control        |
| High Torque Motor | Rack Rotation       |
| Hydraulic Lift    | Vertical Movement   |
| LCD Display       | Parking Status      |
| Relay Module      | Motor Control       |
| Motor Driver      | Drive Motors        |
| Wi-Fi             | Cloud Communication |
| UPS               | Backup Power        |

---

# 💻 Software Stack

* Arduino IDE
* Embedded C++
* Telegram API

---

# 🌐 Technologies Used

* Internet of Things (IoT)
* Cloud Computing
* Embedded Systems
* Industrial Automation
* ESP32
* RFID
* QR Authentication
* Camera Surveillance
* Hydraulic Engineering
* Smart Parking
* Artificial Intelligence
* Predictive Analytics
* Traffic Optimization

---

# 📈 Project Capacity

| Feature         | Value                |
| --------------- | -------------------- |
| Parking Layers  | 25                   |
| Slots Per Layer | 8                    |
| Total Capacity  | 200 Cars             |
| Parking Type    | Circular Underground |
| Rotation        | 360°                 |
| Authentication  | RFID + QR            |
| Monitoring      | Cloud + Camera       |

---

# 🌍 Applications

* Smart Cities
* Shopping Malls
* Airports
* IT Parks
* Hospitals
* Residential Apartments
* Industries
* Metro Stations
* Commercial Buildings

---

# 🌱 Sustainable Development Goals (SDGs)

* SDG 9 – Industry, Innovation and Infrastructure
* SDG 11 – Sustainable Cities and Communities
* SDG 12 – Responsible Consumption and Production
* SDG 13 – Climate Action

---

# 🚀 Future Scope

* AI Parking Prediction
* Mobile Application
* Number Plate Recognition
* Driverless Car Integration
* Solar Powered System
* Facial Recognition
* Predictive Maintenance
* Smart City Integration

---

# 📂 Repository Structure

```text
Arduino_Code/
ESP32_CAM/
Images/
Videos/
Circuit_Diagrams/
Hardware/
CAD/
Documents/
Research_Papers/
Presentation/
README.md
LICENSE
```

---

# 📸 Project Images

* System Architecture
* Hardware Setup
* Circuit Diagram
* Parking Workflow
* Mechanical Design
* Prototype

*(Add images inside the Images folder and reference them here.)*

---

# 🎥 Demonstration

Demo video can be uploaded to YouTube or Google Drive.

```text
https://youtube.com/shorts/Z4NCwR9dFVg?si=QJGdL3QPlbC4CuPs
```

---

# 📄 Documentation

* Project Report
* Research Paper
* PPT
* User Manual
* Circuit Diagram

---

# 🔒 License

This project is licensed under the **MIT License**.

---

# 👨‍💻 Developed By

**CREVIOTICS**

### Team Lead

**Kavinraj R**

### Team Members

* Rupesh S Nair
* Praveen S
* Guhan D
* Harish S

---

## "Building the Future of Smart Parking through IoT, Automation, Artificial Intelligence, and Intelligent Infrastructure."
