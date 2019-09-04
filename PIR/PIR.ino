int calTime = 30;
long unsigned int lowIN;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;
int pirPIN = 5;
int ledPIN = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pirPIN, INPUT);
  pinMode(ledPIN, OUTPUT);
  digitalWrite(pirPIN, LOW);
  Serial.println("Calibrating Sensor");
  for(int i =0; i < calTime; i++){
      Serial.print(".");
      delay(1000);
    }
    Serial.println("Done");
    Serial.println("Sensor Active");
    delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pirPIN) == HIGH){
      digitalWrite(ledPIN, HIGH);
      if(lockLow){
          lockLow = false;
          Serial.println("---");
          Serial.print("Motion Detected at");
          Serial.print(millis()/1000);
          Serial.println("secs");
          delay(50);
      }
      takeLowTime = true;
        }
   if(digitalRead(pirPIN) == LOW){
      digitalWrite(ledPIN, LOW);
      if(takeLowTime){
          lowIN = millis();
          takeLowTime = false;
        }
        if(!lockLow &&  millis() - lowIN > pause){
            lockLow = true;
            Serial.print("motion ended at: ");
            Serial.print((millis()- pause) / 1000);
            Serial.println(" sec");
            delay(50);
          }
    }
}
