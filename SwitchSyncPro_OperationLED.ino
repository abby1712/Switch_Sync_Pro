// *****************************************************************
// Code Created By: Abhishek Sebastian
// Code Creation Date: October 28, 2023
// Code Ownership: Abhira A.I
// Unauthorized use or distribution of this code is strictly prohibited.
// *****************************************************************
const int OperationLED = 6;  // Define the GPIO pin for the OperationLED (D6)

void setup() {
  pinMode(OperationLED, OUTPUT); // Set the LED pin as an OUTPUT
}

void loop() {
  // Call the OperationLedGlow function to turn on the OperationLED
  OperationLedGlow();
  delay(200); // Delay for 1 second (1000 milliseconds)
}

void OperationLedGlow() {
  digitalWrite(OperationLED, HIGH); // Turn on the LED
}
