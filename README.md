#  Bluetooth-Controlled RC Car Using Arduino Uno

A smartphone-controlled robotic vehicle developed using Arduino Uno, Bluetooth communication, and motor control technologies.

---

#  Table of Contents

* [Overview](#overview)
* [Problem Statement](#problem-statement)
* [Dataset](#dataset)
* [Tools and Technologies](#tools-and-technologies)
* [Methods](#methods)
* [Key Insights](#key-insights)
* [Dashboard/Model/Output](#dashboardmodeloutput)
* [How to Run This Project?](#how-to-run-this-project)
* [Results & Conclusion](#results--conclusion)
* [Future Work](#future-work)
* [Author & Contact](#author--contact)

---

## Overview

This project describes the design, programming and implementation of a Bluetooth controlled Remote-Controlled (RC) car using the Arduino Uno microcontroller platform. The main aim of this project is to design a low cost wireless robotic vehicle which can be controlled remotely by a smart phone application using Bluetooth communication technology.

The system includes an Arduino Uno board, an HC-05 Bluetooth module, an L298N motor driver and DC geared motors to create a functional interactive robotic platform. The main controller is the Arduino Uno which processes the commands received from the smartphone application and controls the movement of the vehicle accordingly. The RC car can move forward, backward, turn left, turn right and stop responding to user's commands.

---

## Problem Statement

Traditional wired robotic systems restrict mobility and user interaction due to their physical connections. The objective of this project is to design and implement an affordable, wireless robotic vehicle that can be controlled remotely using Bluetooth communication. This project aims to provide practical knowledge of robotics, embedded systems, wireless communication, and motor control while creating a platform that can be expanded with advanced features in the future.

---

## Dataset

This project does not require a traditional dataset. Instead, it operates using real-time Bluetooth commands transmitted from a smartphone application.

### Input Commands

* **F** → Move Forward
* **B** → Move Backward
* **L** → Turn Left
* **R** → Turn Right
* **S** → Stop

---

## Tools and Technologies

### Hardware Components

* Arduino Uno
* HC-05 Bluetooth Module
* L298N Motor Driver Module
* DC Geared Motors
* Robot Car Chassis
* Wheels
* Battery Pack
* Jumper Wires
* Power Switch

### Software Components

* Arduino IDE
* Bluetooth RC Controller Application
* Embedded C/C++ Programming Language

### Technologies Used

* Embedded Systems
* Robotics
* Bluetooth Communication
* Motor Control Systems
* Arduino Programming

---

## Methods

The implementation of this project involves the following steps:

1. Assembly of the robot chassis and installation of wheels.
2. Mounting the DC motors onto the chassis.
3. Connecting the HC-05 Bluetooth module to the Arduino Uno.
4. Integrating the L298N motor driver module.
5. Establishing power connections using a battery pack.
6. Programming the Arduino Uno using the Arduino IDE.
7. Pairing the Bluetooth module with the smartphone.
8. Receiving and processing Bluetooth commands.
9. Controlling the movement of the motors based on received instructions.
10. Testing and optimizing the performance of the RC car.

---

## Key Insights

* Arduino Uno provides an efficient and user-friendly platform for robotics projects.
* Bluetooth communication enables low-cost wireless control systems.
* The L298N motor driver effectively controls bidirectional motor movement.
* Hardware integration and embedded programming are fundamental skills in robotics development.
* Simple electronic components can be integrated to create practical and interactive robotic systems.

---

## Dashboard/Model/Output

### System Architecture

```
Smartphone Application
          ↓
HC-05 Bluetooth Module
          ↓
      Arduino Uno
          ↓
   L298N Motor Driver
          ↓
      DC Motors
          ↓
    RC Car Movement
```

### Output Functions

.Forward Movement

. Backward Movement

. Left Turn

. Right Turn

. Stop Function

---

## How to Run This Project?

### Step 1: Hardware Assembly

* Assemble the robot chassis.
* Mount the DC motors and wheels.
* Connect the HC-05 Bluetooth module to the Arduino Uno.
* Connect the L298N motor driver module.
* Connect the battery supply.

### Step 2: Software Installation

* Install the Arduino IDE.
* Download the project source code.
* Install the required Arduino board drivers.

### Step 3: Upload the Program

* Connect the Arduino Uno to the computer using a USB cable.
* Select the correct board and COM port in the Arduino IDE.
* Upload the source code to the Arduino Uno.

### Step 4: Bluetooth Pairing

* Turn on the RC car.
* Pair the smartphone with the HC-05 Bluetooth module.
* Open the Bluetooth RC Controller application.
* Establish a Bluetooth connection.

### Step 5: Vehicle Operation

* Use the application interface to control the movement of the RC car.
* Test all movement functions and verify proper operation.

---

## Results & Conclusion

The Bluetooth-controlled RC car was successfully designed, developed, and implemented using Arduino Uno and Bluetooth communication technology. The system achieved reliable wireless communication and effective motor control through a smartphone application. This project provided valuable hands-on experience in embedded systems, robotics, wireless communication, and hardware integration. The successful implementation demonstrates the potential of Arduino-based systems for developing affordable and efficient robotic applications.

---

## Future Work

This project can be enhanced by incorporating additional features such as:

* Obstacle avoidance using ultrasonic sensors
* Line-following capabilities
* Voice-controlled operation
* Camera integration
* Gesture-based control
* Internet of Things (IoT) connectivity
* GPS navigation
* Autonomous driving systems
* Mobile application customization

---

## Author & Contact

**Project:** Bluetooth-Controlled RC Car Using Arduino Uno

**Author:** **Yashaswini Devarapally**

**GitHub:** [https://github.com/devarapallyyashaswini-cell](https://github.com/devarapallyyashaswini-cell)

**Email:** [devarapally.yashaswini@gmail.com](mailto:devarapally.yashaswini@gmail.com)
