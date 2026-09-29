# 🚗 Autonomous Navigation Car

## 📌 Overview

The **Autonomous Navigation Car** is an embedded systems project developed for the **Microprocessor & Interfacing Lab (CSE 238)**.
This project demonstrates a smart vehicle capable of navigating its environment automatically while avoiding obstacles without human intervention.

## 🎯 Objective
The goal of this project is to design and implement a microcontroller-based system that integrates sensors, actuators, and control logic to achieve autonomous navigation.

## ⚙️ Features
* 🚀 Autonomous forward movement
* 📡 Obstacle detection using ultrasonic sensor
* 🔄 Left-right environmental scanning using servo motor
* 🧠 Real-time decision making (forward, stop, reverse, turn)
* ⚡ 4WD motor control using motor driver


## 🧩 Components Used
* Arduino Uno (ATmega328P)
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* L293D Motor Driver Shield
* 4 DC Gear Motors (4WD chassis)
* 2 × 18650 Li-ion Batteries


🖼️ Project Diagram
<p align="center">
  <img src="https://raw.githubusercontent.com/SaikatTalukder7/Autonomous-Navigation-Car/main/images/diagram.jpg" width="600"/>
</p>


## 🔌 Pin Configuration

| Component    | Pin Connection | Function                  |
| ------------ | -------------- | ------------------------- |
| HC-SR04 Trig | A0             | Sends ultrasonic signal   |
| HC-SR04 Echo | A1             | Receives reflected signal |
| Servo Motor  | Pin 10         | Rotates sensor            |
| DC Motors    | M1–M4          | Drives wheels             |


## 🧠 Working Principle

The system operates using the **ultrasonic time-of-flight principle**:
1. The sensor sends an ultrasonic pulse
2. The echo is received after reflecting from an object
3. Distance is calculated using time delay
4. If an obstacle is detected within a threshold (≈20 cm):

   * Car stops
   * Moves backward
   * Scans left and right
   * Chooses the clearer path
5. The car resumes forward motion


## 🔄 Algorithm

1. Initialize motors and servo (center position)
2. Continuously measure forward distance
3. If distance < threshold:

   * Stop → Reverse
   * Scan right and left
   * Turn towards greater distance
4. Else:

   * Move forward
5. Repeat loop

## 💻 Code

Main libraries used:

* `AFMotor.h`
* `NewPing.h`
* `Servo.h`

Core functionalities:
* Distance measurement
* Servo-based scanning
* Motor control (forward, backward, turning)


## 📊 Results
* Successfully avoids obstacles in simple environments
* Performs autonomous navigation with basic decision-making
* Works best with solid, flat obstacles


## ⚠️ Limitations

* Difficulty detecting soft or angled objects
* Inaccurate turning due to delay-based control
* Limited field of view (single sensor scanning)
* Voltage drop in L293D reduces efficiency


## 🚀 Applications

* Educational robotics projects
* Basic autonomous vehicles
* Obstacle-avoiding robots
* Warehouse guided systems (basic level)

## 🔮 Future Improvements

* Replace L293D with efficient motor driver (TB6612FNG / DRV8833)
* Add multiple sensors for better coverage
* Implement PID control for precise movement
* Integrate IR or line-following sensors
* Add wireless control or monitoring


## 👥 Team Members

* Muhtasim Ahmed
* Arafat Islam Zihad
* Anojith Roy
* Jannatul Ferdous Oni


## 👨‍🏫 Supervisor
**Ahmed Istiakur Rahman Sir**



## 📚 References

* Arduino Official Documentation
* Open-source libraries and community resources

---

## 📄 License
This project is developed for academic purposes. Feel free to use and modify with proper acknowledgment.


