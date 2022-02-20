 
 #define DAC_PIN A0 
 
 float x = 0 ; 
 float increment = 0.02;  // increment time
 int frequency = 440; // Frequency of sine wave
 
 void setup() {
  analogWriteResolution(10) ; 
  analogReadResolution(12) ;  
  Serial.begin(9600) ;
 }
 
 void loop() {
  // 1023/2 = 511.5
  int dacVoltage = (int)(511.5 + 511.5 * sin(x));
  x += increment; // Increase value of x
 
  // 0= 0V, 1023=3.3V, 512=1.65V, etc.
  analogWrite(DAC_PIN, dacVoltage);
 
  // Now read A1 (connected to A0), and convert that
  // 12-bit ADC value to a voltage between 0 and 3.3.
  float voltage = analogRead(A1) * 3.3 / 4096.0;
  Serial.println(voltage); // Print the voltage.
  delay(1); // Delay 1ms
}
