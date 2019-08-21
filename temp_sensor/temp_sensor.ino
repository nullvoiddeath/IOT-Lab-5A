int in = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawVoltage = analogRead(in);
  float millivolts = (rawVoltage/1024.0)*5000;
  float celsius = millivolts/10;
  Serial.print(celsius);
  Serial.println(" degree celsius");
  Serial.print((celsius*9)/5 + 32);
  Serial.println(" degree Fahrenehiet");
  delay(1000);
}
