IoT-Based Automated Circular Underground Car Parking System
Helix-Spin dynamics 
Team Name : CREVIOTICS
Team Id : RH – 0036
Team Lead Name : Kavinraj R
Team Members : Rupesh S Nair
                            Praveen S
                            Guhan D
                            Harish S

i.	Problem Statement :

•	The rapid growth of the number of vehicles leads to a deficit of parking spaces.
•	Traditional parking systems require significant free horizontal space to assign vehicles to specific parking spots, which is difficult to find in big cities.
•	In addition, drivers waste time searching for available parking spaces.
•	Moreover, traffic jams are formed near the parking due to the inefficiency of the parking system.
•	Manual operation of parking systems leads to high complexity of operations and a large number of responsibilities for humans.
•	In addition, such systems allow for a relatively low number of vehicles to be parked in one parking lot due to inefficient use of space.
•	Furthermore, the absence of information about available parking spaces in real-time causes inconvenience to drivers.
•	The theft of parked vehicles, as well as other security problems, is a severe security risk for drivers.
•	In addition, traditional parking systems tend to increase carbon emissions due to the impossibility of instant parking.
•	Traditional parking infrastructure is not optimized and thus does not support modern trends such as the development of smart cities and the Internet of Things.
•	The problem to be solved by the new smart parking concept includes the optimization of the use of space at the parking, the implementation of innovative technology, and increasing the amount of parking that can be placed in one parking lot.

ii.	Proposed solution :

	To combat the problems posed by existing parking systems, we propose an AI-Based Automated Circular Underground Parking System which focuses on making the best use of the available space underground
	The proposed system is designed as a circular underground parking system with 25 stories with 8 parking slots each for a total of 200 vehicles. In each parking slot, a sensor has been placed which keeps a record of the number of vehicles entering and exiting and the availability of the slots.
	When a vehicle approaches the automated parking system, sensors installed detect the vehicle and assign a slot to the vehicle. A QR code or RFID code is generated for the vehicle. The vehicle information, QR code, location, and image are stored in cloud storage
	The parking story or level is raised up by using hydraulic lifts and rotated with the help of a motorized rotating rack to bring the assigned slot to the gate. When the vehicle needs to be retrieved, the person can present the QR code or RFID card and the vehicle will be delivered automatically at the gate. Cameras can be set up at the entrance and exit to capture the vehicle image to verify details. The status of the parking can be tracked down with the help of a cloud storage account. The system can also calculate the amount to be paid by the owner of the vehicle.
	This system is a space-saving, secure, and automated parking system that can be implemented in future smart cities, hospitals, residential buildings, airports, shopping malls, industries, and IT parks.

iii.	Novelty / Unique Features :

•	Circular parking system design: It takes advantage of underground space, and it is more spacious compared to other parking systems that make use of huge surface areas.
•	It accommodates a huge number of cars: It accommodates 200 cars, with 8 cars per parking layer, and has 25 layers in total, making it very compact and space-saving.
•	Hydraulics: The parking system uses hydraulic lifts to raise and lower every parking layer.
•	360-degree rotating racks: The parking system makes use of circular racks which rotate to allow a driver to move into any parking space. This allows the driver access to the appropriate parking slots depending on where his car is located in the system.
•	Slot sensors: The system uses infrared sensors to monitor which parking slots are occupied.
•	QR/RFID tags: The vehicle identification system uses QR codes and RFID to recognize vehicles. Each car has its own identification code.
•	Camera surveillance: The camera checks the vehicle entering and exiting to confirm its identity.
•	Storage system: The system stores the data of the vehicle in a cloud to indicate the exact location of the vehicle parked in any of the 25 parking slots.
•	Display system: This monitors and updates the availability of spaces in all the slots in real-time. This information is displayed on an LCD panel.
•	Entry and exit bays: The parking has three entry and three exit bays to prevent traffic jams or slow traffic due to drivers searching for empty parking slots.
•	Automation: The parking system is automated, saving a lot of time for humans. It reduces the amount of human activity involved in the parking process.
•	AI-ready system: The whole system is designed to be intelligent. It has the potential to be able to predict traffic patterns, recognize license plates, etc., to assist a smart city project.


iv.	Objectives :
a)	Primary Objectives :
	To design an automated underground parking system with maximum parking space in a minimum   land area.
	To achieve maximum utilization of underground space.
	To automate the parking process by using hydraulic lifts and rotating parking racks.
	To monitor the availability status of parking slots using IoT sensors.
	To secure the vehicles using QR/RFID scanning and surveillance cameras.
	To minimize time for retrieval of vehicles by automated parking system.
	To reduce traffic congestion due to searching for parking slots.

b)	Secondary Objectives :
	To store the data about parking slots in the cloud for security monitoring.
	To provide the availability status of each parking slot to the driver in real-time through a digital display board.
	To reduce the manual efforts and associated costs for the parking management system.
	To develop a parking system with scope for AI integration for future smart cities.
	To provide a sustainable underground parking system for the parking of vehicles.

v.	System Architecture / Technical Approach :
The proposed system employs the IoT framework which provides the following advantages:
1. IoT Sensors – for vehicle detection and monitoring
  				2. Automation System – for automated parking
3. Cloud – for data storage
4. Security – for system monitoring
The technical architecture of the proposed system is divided into four (4) layers namely: Input Layer, Processing Layer, Mechanical Control Layer, and Output Layer.




A.	Input Layer
The input layer collects input data from the environment that will be processed by the system to serve its purpose. The key components in this layer are:
1. Ultrasonic Sensor – for vehicle detection at the entrance and exit
2. IR Sensor – for parking slot detection
3. ESP32 Camera – for vehicle detection/monitoring
4. QR Scanner / RFID Reader – for vehicle authentication

B.	Processing Layer
    	  This layer contains the primary processer of the system. The main components of this layer are:
1. ESP32 – processes data and control sensors and other system components
2. Parking Management System – manages and controls the parking system
3. Cloud Database – stores data such as video data and images, vehicle data, and payments
4. AI Module – optional module that can help perform prediction-based parking management and vehicle recognition

C.	Mechanical Control Layer
The mechanical control layer consists of devices that control the vehicle storage and retrieval process. This layer incorporates modern technology to make the parking process efficient and less mechanical. The components of this layer are:
1. Hydraulic Lift – lifts the parking decks up and down to the desired level
2. Rotating Parking Racks – rotates 360 degrees to bring the desired vehicle to the loading/unloading bay
3. High Torque Motors – rotates the parking rack
4. Servo Motor Gate – controls the opening and closing of the gate
D.	Output Layer
The output layer consists of components that provide output to the user. The outputs can be in the form of data or control signals. The components of this layer are:
1. LCD Display – displays the number of available parking slots
2. Gate System – opens and closes upon successful vehicle authentication
3. Payment System – computes the amount due upon parking out
4. Notification System – sends notification to the user via cloud subscription or messaging application such as Telegram.
vi.	Technical Approach
a.	Vehicle Detection
•	The vehicle detection process begins when the vehicle approaches the automatic parking system. 
•	The ultrasonic sensor detects the vehicle followed by a vehicle image capture using the camera. The system will then attempt to identify an empty parking slot using IR Sensors. Once an empty slot has been identified, the system will assign a parking slot to the vehicle. T
•	The system will then generate a QR code or RFID tag for vehicle authentication. The hydraulic lift will bring the parking deck to the identified slot while the rotating racks will align the parking slot with the loading/unloading bay.
•	The whole process of moving the vehicle into the parking slot is controlled by high-torque motors while the opening and closing of the gate are controlled by a servo motor. As the vehicle parks, the system will update the database indicating that the parking slot has been occupied.
b.	Parking Retrieval
•	The parking retrieval process starts when the vehicle owner attempts to retrieve his/her vehicle by scanning the QR code or RFID tag. After successful authentication, the system will identify the parking location of the vehicle. 
•	The hydraulic lift will bring the parking deck to the loading/unloading bay while the rotating rack aligns the vehicle to the parking gate. 
•	The camera will then verify the vehicle and confirm the ownership of the vehicle using QR code or RFID. The system will then compute the amount due upon parking retrieval. T
•	he servo gate will then open to allow the vehicle to exit and the LCD display will update the parking availability.


             
vii.	Hardware Requirements:
The proposed IoT-Based Automated Circular Underground Parking System utilizes the following  hardware components:
     Hardware Component Purpose
	ESP32 Microcontroller Controls sensors, motors, and the whole process
	ESP32-CAM Module Used to capture and store images of vehicles in the cloud server for security purposes
	Ultrasonic Sensors Detect vehicles at entry and exit points
	IR Sensors Detect vacant and occupied slots
	RFID Reader & RFID Cards Detects vehicles and authorize access to the parking system
	QR Code Scanner Reads QR codes for retrieving vehicles
	Servo Motors Operates the automatic entry and exit gate
	High-Torque DC Motors / Stepper Motors Rotates the circular parking rack system
	Hydraulic Lift System Makes vertical movement of parking slots up and down while parking or retrieving
	LCD Display Shows vacant and occupied slots
	Wi-Fi Communication Module (Built in ESP32) Communicates with the cloud server
	Power Supply Unit Power supplies the sensors, controller, motor, and display unit
	Ball Bearings Facilitate 360-degree rotation of the parking slots
	Relay Module Controls high-power devices including the motors and hydraulic lift
	Motor Driver Module Controls the DC/Stepper motors
	Emergency Backup Battery / UPS Provides emergency power during a power outage

viii.	Software Requirements
The proposed system necessitates the utilization of software tools for programming, user interface creation, cloud connection, data management, and communication.
     Software Purpose
	Arduino IDE Programming and uploading the codes onto ESP32
	Embedded C/C++ Coding for sensor, motor control, and automation
	HTML Creation of interfaces for web application
	CSS Enhancement of the appearance of websites
	JavaScript Implementation of special effects and interactive features on web pages
	Cloud computing platform Storage of vehicle data, parking data, and images
	Database management system Storing parking slot, user, and transaction details
	Telegram API Sending and receiving messages, and alerts
	QR code generation library Generating unique QR codes for vehicle recognition
	AI/ML framework (future scope) Enabling vehicle recognition, prediction, and parking solutions.

ix.	Technologies Used:
The AI-based automated circular underground parking system uses advanced technologies, including
IoT, automation, cloud computing, and security systems.
a.	Internet of Things (IoT)
	The AI-based automated underground parking system uses IoT to connect sensors and controllers to the cloud.
	This technology enables the system to monitor the number of empty slots in real-time.
b.	 Sensor Technology
	The parking system uses ultrasonic and IR sensors to detect vehicles’ position and movement in the parking area.
	Moreover, the technology helps track the availability of slots and their status automatically.
c.	Embedded Technology
	This system employs an embedded microcontroller to operate and manage the parking process automatically.
	The technology is ideal because it connects to the cloud through Wi-Fi.
d.	Cloud Computing
	The parking system uses cloud computing to store captured images of the vehicles in the database.
	In addition, the technology helps secure and manage the stored data remotely.
e.	Camera-Based Security System
	The automated parking system uses a camera to capture pictures of vehicles in the parking slots.
	The technology makes it easy to identify and track vehicles in the parking garage digitally.
f.	QR Code and RFID Technology
	The AI-based automated underground parking system utilizes QR codes and RFID tags to recognize and authorize vehicle entry into the parking slot.
	The technology helps prevent security challenges during parking operations.


g.	Automation Technology
	This system uses hydraulic lifts to help move cars vertically during the parking process.
	The technology also employs rotating motorized racks to hold and adjust vehicles’ positions automatically.
h.	Web Technology
	The automated parking system uses HTML to design web pages for presenting information related to the project.
	The system also uses CSS and JavaScript programming languages to develop web applications that support real-time operation, design, and performance.
i.	Communication Technology
	The AI-based automated circular underground parking system uses Wi-Fi communication through ESP32 to connect the cloud to the controller.
	For instance, the project uses Telegram API to communicate messages and sync data with the cloud to manage operations remotely.
j.	Artificial Intelligence (Future scope)
	The automated parking system can utilize artificial intelligence to predict the availability of slots based on demand forecasts.
	For example, the system could use AI to identify and verify vehicles automatically.
x.	Impacts and Benefits:\

1.	Environmental Benefits
	Land Preservation: It makes use of underground vertical space and hence saves large expanses of land from being used as parking lots.
	Reduced Pollution: It decreases the search time for available parking slots and hence reduces fuel consumption and carbon emissions greatly.
	Sustainable Infrastructure: Helps in developing countries with sustainable projects or smart city projects.
	Energy Efficient: Can be developed as an energy efficient system in the future with renewable energy.





2.	Benefits for Users
	Saves time: The parking process is quick and hassle free. The user does not have to search for parking and wait for someone to assist him or her with parking or retrieving their vehicle.
	Increased security: Vehicle images can be captured along with QR or RFID tags. All data can be stored in a cloud with appropriate security measures taken.
	Convenience: The system is fully automated and requires lesser human interaction.
	Availability information: LCD screens can be used to display the availability of parking slots.
	Avoids damage: Automated parking systems help avoid damage to vehicles and also provide organized parking.

3.	Benefits for Builders and Developers
	Space: Offers maximum space by accommodating large amounts of vehicles in lesser space.
	Cost Saving: Saves cost in terms of land and manpower
	Higher Profits: With higher space comes higher profits.
	Easy Expansion: More floors can be added to accommodate more vehicles.
	Smart Infrastructure: Increases the value of infrastructure developments such as commercial complexes and residential buildings.

4.	Benefit for Smart Cities
	Reduces traffic congestion: By reducing the time spent searching for parking, traffic congestion due to parking can be reduced.
	IoT: Can be integrated to various systems to make smarter traffic management systems.
	Big data: Can collect data for future reference or analysis on parking needs.
	Adaptability: Can be adapted to make smart cities that support autonomous cars and run on artificial intelligence in the future.

xi.	Future Scope
The proposed AI-Based Automated Circular Underground Parking System can be further developed in the future through the following ways:
a.	IoT-Based Parking System
	Incorporate artificial intelligence to predict parking trends and demands based on past data.
	This can be used to determine the peak hours of parking so that appropriate number of slots can be allocated to avoid overcrowding and waiting time.

b.	Smart Parking System
	Integrate the parking system to form part of the smart city.
	This will involve connecting to existing infrastructures such as traffic systems in order to regulate           the parking process.
c.	Smart Cars and Connecting Cars
	Connect and sync automated cars with the automated parking system.
	The system should be able to communicate with driverless cars to enable them to identify, allocate and park vacant slots.
d.	Automatic Number Plate Recognition Technology
The use of number plate recognition technology will make the identification process in the parking system seamless.
e.	Developing an Application
	The development of application to assist in reserving slots in the automated parking system.
	It will also be helpful in giving out information about available space in the parking system.
f.	Predictive Maintenance
	Utilization of artificial intelligence in the predictive maintenance of the automated parking system.
	The AI will monitor the performance of the machine to know when it requires servicing thus eliminating the need for predictive maintenance.
g.	Solar Panels and Motors
	Use of solar panels and energy efficient motors to power the automated parking system.
	This will ensure cost efficiency as well as reduce damage to the environment.
c.	Security Features
	The installation of facial recognition and biometric security systems.
	Surveillance and monitoring system will also be useful in detecting thefts and other suspicious activities in the automated parking system.

Conclusion:
The proposed IoT-Based Automated Circular Underground Parking System combines Artificial Intelligence, IoT, Industrial Automation, Cloud Computing, Hydraulic Engineering, and Smart Infrastructure to create a next-generation parking solution.




REFERENCES

For Journal papers
1.	Wu, X., Sahoo, D. and Hoi, S.C., 2020. Recent advances in deep learning for object detection. Neurocomputing, 396, pp.39-64.
2.	Yang, D., Miao, C., Li, X., Liu, Y., Wang, Y. and Zheng, Y., 2023. Improved YOLOv7 network model for gangue selection robot for gangue and foreign matter detection in coal. Sensors, 23(11), p.5140. 
3.	Li, D., Zhang, Z., Xu, Z., Xu, L., Meng, G., Li, Z. and Chen, S., 2019. An image-based hierarchical deep learning framework for coal and gangue detection. Ieee Access, 7, pp.184686-184699.
4.	Yan, P., Sun, Q., Yin, N., Hua, L., Shang, S. and Zhang, C., 2022. Detection of coal and gangue based on improved YOLOv5. 1 which embedded scSE module. Measurement, 188, p.110530.
5.	Li, S.E., Li, G., Yu, J., Liu, C., Cheng, B., Wang, J. and Li, K., 2018. Kalman filter-based tracking of moving objects using linear ultrasonic sensor array for road vehicles. Mechanical Systems and Signal Processing, 98, pp.173-189.
6.	Wang, Y. and Xiang, X., 2024. GMS-YOLO: an enhanced algorithm for water meter reading recognition in complex environments. Journal of Real-Time Image Processing, 21(5), p.173.
7.	Yadav, K.S., Anish Monsley, K. and Laskar, R.H., 2023. Gesture objects detection and tracking for virtual text entry keyboard interface. Multimedia Tools and Applications, 82(4), pp.5317-5342.
8.	Siegel, J.E., Erb, D.C. and Sarma, S.E., 2017. A survey of the connected vehicle landscape—Architectures, enabling technologies, applications, and development areas. IEEE Transactions on Intelligent Transportation Systems, 19(8), pp.2391-2406.
9.	Fleming, W.J., 2008. New automotive sensors—A review. IEEE sensors journal, 8(11), pp.1900-1921.

For Books
1.	Singh, R., Gehlot, A., Gupta, L.R., Singh, B. and Swain, M., 2019. Internet of things with Raspberry Pi and Arduino. CRC Press.
 


For Website
1. ITransition Team, “IoT in Automotive Industry: Use Cases, Challenges, Solutions,” ITransition. https://www.itransition.com/iot/automotive (accessed May 1, 2026). 
2. A. Aashish Mehra, “Automotive Sensors Companies,” Markets and Markets. https://www.marketsandmarkets.com/ResearchInsight/automotive-sensors-market.asp (accessed May 21, 2026).  
