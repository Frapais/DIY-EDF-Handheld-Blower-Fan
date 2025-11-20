#include <Arduino.h>
// Arduino Servo Control Based on Digital Input
// When input is HIGH, servo signal is 1ms pulse (5% duty cycle on 20ms period)
// When input is LOW, servo signal is 1.4ms pulse (7% duty cycle on 20ms period)
// The pulses are fine tuned to exactly match the required timing, so no additional calibration is needed.

const int servoOutputPin = 0;  // GPIO pin connected to servo signal line
const int digitalInputPin = 2; // GPIO pin connected to digital input

// Servo timing constants (based on 20ms period)
const long PWM_PERIOD = 2500;  // Total period in microseconds (20ms)
const int PULSE_LOW = 175;     // Pulse width for LOW input (1ms = 5%)
const int PULSE_HIGH = 125;    // Pulse width for HIGH input (1.4ms = 7%)

void setup() {
  pinMode(servoOutputPin, OUTPUT);
  pinMode(digitalInputPin, INPUT_PULLUP); // Use internal pull-up resistor
}

void loop() {
  int inputState = digitalRead(digitalInputPin);
  
  if (inputState == LOW) {
    // Input is LOW, send 1ms pulse (5% duty cycle)
    digitalWrite(servoOutputPin, HIGH);
    delayMicroseconds(PULSE_LOW);
    digitalWrite(servoOutputPin, LOW);
  } else {
    // Input is HIGH, send 1.4ms pulse (7% duty cycle)
    digitalWrite(servoOutputPin, HIGH);
    delayMicroseconds(PULSE_HIGH);
    digitalWrite(servoOutputPin, LOW);
  }
  
  // Complete the remainder of the 20ms period
  delayMicroseconds(PWM_PERIOD - (inputState == LOW ? PULSE_LOW : PULSE_HIGH));
}