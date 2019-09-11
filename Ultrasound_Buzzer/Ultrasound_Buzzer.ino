
const int trigPin = 3;
const int echoPin = 2;
const int buz = 13;
void setup() {
  // put your setup code here, to run once:
//  lcd.begin(16, 2);
//  lcd.setCursor(0, 0);
  pinMode(buz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buz, LOW);
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
//  lcd.print(inches);
//  lcd.print("in , ");
//  lcd.print(cm);
//  lcd.print("cm");
  if( cm <= 10)
    digitalWrite(buz, HIGH);
   else
    digitalWrite(buz, LOW);
  delay(1000);
}
