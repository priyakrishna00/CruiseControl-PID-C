import pandas as pd
import matplotlib.pyplot as plt

# Load CSV
data = pd.read_csv("data.csv")

# Plot Speed vs Time
plt.figure(figsize=(10, 5))
plt.plot(data["Time(s)"], data["Speed(kmph)"], label="Speed", color="blue")
plt.axhline(y=60, color='r', linestyle='--', label="Target Speed (60 km/h)")
plt.title("PID Cruise Control Simulation")
plt.xlabel("Time (s)")
plt.ylabel("Speed (km/h)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()
