int buzzer = 13 ;
int flame_sensor = A0 ;
int detectedVal ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;
  pinMode(buzzer, OUTPUT) ;
//  pinMode(flame_sensor, INPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  detectedVal = analogRead(flame_sensor) ;
  Serial.println(detectedVal);
  
  if(detectedVal < 500)
    digitalWrite(buzzer, HIGH);
   else
    digitalWrite(buzzer, LOW);
}
