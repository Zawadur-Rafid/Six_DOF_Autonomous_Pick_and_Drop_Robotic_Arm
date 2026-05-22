# 🤖 6-DOF Autonomous Pick and Drop Robotic Arm

## 📌 Project Summary
This project presents a **6-DOF autonomous robotic arm system** designed for pick-and-place automation using embedded control and electromechanical actuation.

The system integrates **sensor-based object detection, multi-axis servo control, and stepper-driven linear motion** to perform fully automated object manipulation tasks.

Built as an embedded robotics project focusing on **real-time control, motion coordination, and system integration**.

---

## 🎯 Key Objectives
- Design and implement a functional 6-DOF robotic arm
- Enable autonomous object detection and handling
- Achieve coordinated multi-actuator motion control
- Implement stable pick-and-place cycle automation
- Integrate stepper and servo systems in a unified control architecture

---

## ⚙️ System Architecture

**Input Layer**
- Ultrasonic distance sensor for object detection

**Processing Unit**
- Arduino Uno microcontroller

**Actuation Layer**
- Servo motors for multi-joint robotic arm movement
- NEMA 17 stepper motor for linear slider motion

**Driver Interface**
- A4988 stepper motor driver module

**Control Logic**
- Sequential state-based automation (detect → pick → move → place → reset)

---

## 🔄 Working Methodology

1. The ultrasonic sensor continuously monitors the workspace for object presence.
2. Upon detection within threshold distance, the control system initiates the operation sequence.
3. The servo-driven robotic arm moves into the pre-calibrated pick position.
4. The gripper engages and secures the object.
5. The stepper motor-driven slider transports the arm to the drop location.
6. The gripper releases the object at the target position.
7. The system returns to idle state and resumes scanning.

---

## 🔩 Hardware Stack

| Component | Function |
|----------|----------|
| Arduino Uno | Central control unit |
| NEMA 17 Stepper Motor | Linear motion (slider system) |
| A4988 Driver | Stepper motor control |
| MG996R Servo Motor | High-torque joint actuation |
| MG90S Servo Motor | Intermediate joint movement |
| SG90 Servo Motor | Lightweight articulation / gripper |
| HC-SR04 Ultrasonic Sensor | Object detection |

---

## 🧠 Engineering Highlights

- Multi-actuator synchronization (servo + stepper integration)
- Real-time embedded control system design
- Sequential automation logic implementation
- Mechanical-electrical system integration
- Calibration-based positional control strategy
- Power-aware actuator distribution

---

## 🛠️ Tools & Technologies
- Embedded C / Arduino Programming
- Robotics Motion Control
- Electromechanical System Design
- Sensor Integration (Ultrasonic ranging)
- Stepper Motor Driver Control (A4988)

---

## 🚀 System Capabilities
- Fully autonomous pick-and-place cycle
- Real-time object detection and response
- Multi-axis robotic arm control
- Repeatable motion execution with predefined positions
- Stable stepper-servo hybrid motion system

---

## 📈 Future Enhancements
- Inverse kinematics implementation for dynamic motion planning
- Computer vision-based object recognition (camera integration)
- IoT-based remote control interface
- Closed-loop feedback system using encoders
- Path optimization for reduced motion time

---

## 📜 License
This project is intended for educational and portfolio purposes.
