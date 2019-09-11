int led = 13;
int push = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode( led, OUTPUT);
   pinMode(push, INPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(push);
  Serial.println(val);
  //delay(1000);
  if( val == LOW)
      digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);

}
