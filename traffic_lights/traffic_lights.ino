int RED_pin = 13;
int GREEN_pin = 11;
int YELLOW_pin = 12;
void setup() {
  pinMode(RED_pin, OUTPUT);
  pinMode(GREEN_pin, OUTPUT);
  pinMode(YELLOW_pin, OUTPUT);
}

void loop() {
  digitalWrite(RED_pin, HIGH);
  delay(1000);
  digitalWrite(RED_pin, LOW);
  /*delay(10);*/.
  digitalWrite(YELLOW_pin, HIGH);
  delay(1000);
  digitalWrite(YELLOW_pin, LOW);
  delay(10);
  digitalWrite(GREEN_pin, HIGH);
  delay(1000);
  digitalWrite(GREEN_pin, LOW);
  delay(10);
}
