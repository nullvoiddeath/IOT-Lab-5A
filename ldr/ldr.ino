int input = 0;
int led = 13;
void setup() {
  pinMode(input, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(input);
  Serial.println(val);
  
  if(val < 500)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}
