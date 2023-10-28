#define VoltageCheckerPin 2 // Define GPIO 2 (A0) as VoltageCheckerPin

void setup() 
{
  //Serial.begin(115200); (If needed to print in Serial Monitor)
  pinMode(VoltageCheckerPin, INPUT); // Set VoltageCheckerPin (GPIO 2) as INPUT
}

void loop() {
  // Call the checkBatteryVoltage() function to check and print the battery voltage
  checkBatteryVoltage();
  delay(1000); // Delay for 1 second
}

void checkBatteryVoltage() {
  uint32_t Vbatt = 0;
  
  // Read and average 16 samples from the VoltageCheckerPin (formerly A0)
  for (int i = 0; i < 16; i++) {
    Vbatt += analogReadMilliVolts(VoltageCheckerPin); // ADC with correction
  }
  
  // Calculate the average voltage and convert it from mV to V
  float Vbattf = 2 * Vbatt / 16 / 1000.0; // Attenuation ratio 1/2, mV to V
  
  // Print the battery voltage with 3 decimal places
  //Serial.println("Battery Voltage: " + String(Vbattf, 3) + " V");

  // Use Vbattf to have thresholds 

  
}
