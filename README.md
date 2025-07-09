# Servo_control

This project demonstrates how to control four servo motors using an Arduino Uno. It was simulated using Tinkercad and also implemented in real life using a power bank as the power source.

📷 Project Preview

Simulation done in Tinkercad (video available)
Real implementation also recorded in a video

🚀 How It Works

Each servo motor is gradually rotated from 0° to 180° in steps, then back to 0°. The motors move one after the other, and then all together in reverse.

🧰 Components Used

Arduino Uno
4x Servo motors (SG90 or similar)
Breadboard
Jumper wires
Power source (Power Bank via USB)
Optional: External power supply for servos (if needed)
⚙️ Circuit Details

Servo	Signal Pin (Arduino)
1	D3
2	D5
3	D6
4	D9
Power and ground for all servos are connected to the breadboard's rails, which are powered from the Arduino.

📹 Videos

🎥 Tinkercad Simulation – [(https://github.com/Raghad-ALSalmi/Servo_control/blob/main/Task%20servo.mp4)]

🎥 Real Circuit Demo – [(https://github.com/Raghad-ALSalmi/Servo_control/blob/main/Task%20servo1.MOV)]

📦 How to Run

Connect your circuit as shown.
Upload the sweep.ino code to the Arduino Uno.
Watch the servos move sequentially and then return together.
