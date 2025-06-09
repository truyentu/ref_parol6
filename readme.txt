# PAROL6 Reference Project - Source Code Study

This repository contains the complete source code of PAROL6 robot for study and reference purposes.

## 📁 Repository Structure

### 1. Firmware (`/firmware`)
STM32F446RE firmware written in C++ using Arduino framework
- **24 source files**
- Real-time control at 1000+ Hz
- CAN bus gripper communication
- TMC5160 motor driver control

### 2. PC Software (`/pc_software`)
Python-based control software
- **5 main Python modules**
- **3 example programs**
- GUI with CustomTkinter
- 100Hz control loop
- Multi-process architecture

### 3. ROS2/MoveIt (`/ros2_moveit`)
ROS2 integration files
- **8 launch files**
- **8 configuration files**
- **1 URDF data file**

## 🎯 Purpose
This is a reference implementation to study:
- Distributed robot control architecture
- Real-time firmware design
- Python GUI with hardware integration
- ROS2/MoveIt configuration

## ⚠️ Note
This is for educational purposes. For actual robot implementation, refer to the original PAROL6 project.