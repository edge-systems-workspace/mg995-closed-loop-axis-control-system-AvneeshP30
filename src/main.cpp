/**
* @file main.ino
 * @brief MG995 Closed-Loop Axis Control System
 * @author Avneesh PAndey
 * @date 2025-02-20
 *
 * @details
 * Implements PWM-based closed-loop control for MG995 servo motor.
 * Accepts angle input via Serial Monitor and validates range (0–180).
 */
//
// ## 🧠 Code Overview
//
// The system uses the `Servo.h` library to generate PWM signals for angular positioning.
//
// ### Core Logic Flow
//
// 1. Initialize Servo object
// 2. Attach servo to PWM pin
// 3. Accept angle input via Serial
// 4. Validate angle range (0–180°)
// 5. Write angle to servo
// 6. Provide serial feedback

#include <Servo.h>

Servo MYSERVO;

int trigPin = 9;
int echoPin = 10;

void setup() {
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 MYSERVO.attach(5);
 Serial.begin(9600);
}
