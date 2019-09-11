#include <LiquidCrystal.h>
const int trigPin = 3;
const int echoPin = 2;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, inches, cm;
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = (duration / 74) / 2;
  cm = (duration / 29) / 2;
  lcd.print(inches);
  lcd.print("in , ");
  lcd.print(cm);
  lcd.print("cm");
  delay(1000);
}
