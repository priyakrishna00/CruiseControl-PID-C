#include <stdio.h>

int main() {
    // PID Constants (you'll tune these later)
 float Kp = 1.5;
float Ki = 0.7;
float Kd = 0.3;

    // Simulation settings
    float targetSpeed = 60.0; // km/h
    float currentSpeed = 0.0;
    float error = 0.0, prevError = 0.0;
    float integral = 0.0, derivative = 0.0;
    float output = 0.0;
    float dt = 0.1; // time step in seconds
    float friction = 0.05; // simulated drag

    // Open CSV file for logging
    FILE *fp = fopen("data.csv", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Time(s),Speed(kmph),Error\n");

    // Simulation loop (simulate for 60 seconds)
    for (float t = 0.0; t <= 60.0; t += dt) {
        error = targetSpeed - currentSpeed;
        integral += error * dt;
        derivative = (error - prevError) / dt;

        output = Kp * error + Ki * integral + Kd * derivative;

        // Simulate vehicle physics (very simplified)
        currentSpeed += output * dt - friction * currentSpeed;

        // Log data
        fprintf(fp, "%.2f,%.2f,%.2f\n", t, currentSpeed, error);

        // For console
        printf("Time: %.1fs | Speed: %.2f km/h | Error: %.2f\n", t, currentSpeed, error);

        prevError = error;
    }

    fclose(fp);
    printf("Simulation complete. Results saved to data.csv\n");

    return 0;
}
