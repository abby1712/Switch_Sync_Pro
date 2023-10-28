const int buttonPin1 = 3;  // GPIO3 for the button D1
const int buttonPin2 = 4;  // GPIO4 for the button D2
const int FMC = 21;  // GPIO21 for motor calibration D6 (FMC - Forward Motor Control)

void setup() {
  pinMode(buttonPin1, OUTPUT);  // Set the button pin as OUTPUT
  pinMode(buttonPin2, INPUT);   // Set the button pin as INPUT
  pinMode(FMC, OUTPUT);         // Set the motor calibration pin as OUTPUT
  digitalWrite(buttonPin1, HIGH);  // Set GPIO3 to HIGH initially
  digitalWrite(FMC, LOW);         // Initialize the motor calibration pin to LOW
}

void loop() 
{
  checkForCalibrateMotor();
}

void checkForCalibrateMotor() {
  if (digitalRead(buttonPin2) == HIGH) {
    // Perform motor calibration by setting GPIO21 to HIGH
    digitalWrite(FMC, HIGH);
    delay(200);
    digitalWrite(FMC, LOW);
  } else {
    digitalWrite(FMC, LOW);
  }
}
