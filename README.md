# Cruise Control PID Simulation (C Language)

This project simulates a **cruise control system** using a **PID controller**, implemented in pure **C**.  
It models a vehicle’s speed response over time and visualizes how different **PID tuning values** affect stability, overshoot, and steady-state performance.

## 🚗 Project Objective
To simulate the logic of a basic automotive cruise control system using software only — ideal for embedded system testing and interview preparation for **IoT and CASE-related roles**.

## 📌 Features
- Written entirely in C (no hardware required)
- Logs speed over time to `data.csv`
- Multiple PID tuning profiles (P-only, PD, PID, under-tuned)
- Python-based plotting script
- Beginner-friendly for control systems demonstration


## 📈 Sample Output (Case 3: Aggressive PID)
![Aggressive PID Output](plots/case3_aggressive.png)

## 🧪 Technologies Used
- **C Language** for core logic
- **Python (pandas + matplotlib)** for plotting
- Simulation environment: **Code::Blocks** IDE

## 🎯 Applications
- PID-based automotive systems
- Embedded control simulations

## 🧠 What I Learned
- Fundamentals of PID tuning (Kp, Ki, Kd)
- How to simulate control systems in software
- Logging and graphing real-time system behavior
- Visualizing feedback loops for better tuning

