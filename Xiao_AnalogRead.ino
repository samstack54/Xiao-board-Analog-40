
 int Pot = A0 ;
 
 void setup() {
 Serial.begin(9600) ;
 }
 
 void loop() {

  analogReadResolution(12) ;
  
  int PotVal = analogRead(Pot);

  Serial.println(PotVal) ;
  delay(300) ;
 }



 
