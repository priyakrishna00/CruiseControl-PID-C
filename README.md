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
- Testing control logic without hardware
- Resume/portfolio project for IoT or software roles

## 🧠 What I Learned
- Fundamentals of PID tuning (Kp, Ki, Kd)
- How to simulate control systems in software
- Logging and graphing real-time system behavior
- Visualizing feedback loops for better tuning

## 💼 Resume Bullet Point

> Built a cruise control simulation in C using PID algorithms; tuned multiple configurations to visualize vehicle response using Python plots, showcasing control system behavior for IoT/automotive applications.

---

## 📌 Next Steps
- Add an option to dynamically enter target speed
- Include automatic tuning (Ziegler-Nichols method)
- Optional: Expand to GUI-based plotting or web dashboard

---

## 📎 License
Open for educational and personal use.

