/*
    Project name : Touch Sensor Capacitive Touch Module
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-touch-sensor-capacitive-touch-module
*/

// Capacitive Touch Sensor
const int touchPin = 2; // Digital pin connected to the touch sensor

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set touch pin as input
  pinMode(touchPin, INPUT);
}

void loop() {
  // Read the state of the touch sensor
  int touchState = digitalRead(touchPin);

  // Print the state to the Serial Monitor
  if (touchState == HIGH) {
    Serial.println("Touch detected!"); // Touch detected
  } else {
    Serial.println("No touch detected."); // No touch detected
  }

  // Delay for a short interval
  delay(500); // Adjust delay as needed
}
