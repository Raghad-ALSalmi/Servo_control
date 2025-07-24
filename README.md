# Servo Motor Control with Arduino

This project demonstrates how to control **four servo motors** using an **Arduino Uno**.  
It was simulated using **Tinkercad** and also implemented in real life using a **power bank** as the power source.

---

## Project Preview

- ✅ Simulation done in Tinkercad *(video available)*  
- ✅ Real implementation also recorded in a video

---

## How It Works

Each servo motor is gradually rotated from **0° to 180°** in steps, then back to 0°.  
The motors move **one after the other**, and then all together in reverse.

---

## Components Used

- Arduino Uno  
- 4x Servo motors (SG90 or similar)  
- Breadboard  
- Jumper wires  
- Power source (Power Bank via USB)  

---

## Circuit Details

| Servo | Signal Pin (Arduino) |
|-------|----------------------|
| 1     | D3                   |
| 2     | D5                   |
| 3     | D6                   |
| 4     | D9                   |

 Power and ground for all servos are connected to the breadboard's rails, powered from the Arduino.

---

## Videos

- 🎥 **Tinkercad Simulation** – [Watch here](https://github.com/Raghad-ALSalmi/Servo_control/blob/main/Task%20servo.mp4)  
- 🎥 **Real Circuit Demo** – [Watch here](https://github.com/Raghad-ALSalmi/Servo_control/blob/main/Task%20servo1.MOV)

---

## How to Run

1. Connect your circuit as shown.  
2. Upload the `sweep.ino` code to the Arduino Uno.  
3. Watch the servos move sequentially and then return together.



# Walking Algorithm for Humanoid Robot

This file describes a basic walking motion algorithm for a humanoid robot.

## 🧠 Algorithm Overview

The walking process is broken down into multiple stages:

### 1. Initialization
- Set the robot in standing position.
- Initialize balance sensors (e.g. gyroscope, ground sensors).
- Set the Center of Mass (CoM).

### 2. Start Walking
- If walk command is triggered:
  - Check balance.
  - Move one leg forward while keeping the other stable.

### 3. Walking Loop

```pseudocode
WHILE robotShouldWalk:
    Shift weight to left leg
    Lift right leg
    Swing right leg forward
    Place right leg on ground
    Shift weight to right leg
    Lift left leg
    Swing left leg forward
    Place left leg on ground
    Check balance and adjust if necessary
    Adjust torso and arms for balance
END WHILE
```

### 4. Balance & Correction
- Monitor robot posture.
- If imbalance is detected:
  - Adjust leg, arm, or torso position.
  - Recenter the weight.

### 5. Stop Walking
- When stop command is received:
  - Halt movement.
  - Return to stable standing posture.

