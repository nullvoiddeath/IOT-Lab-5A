#include<Servo.h>
Servo s;
int input = A0;
int output = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(input, INPUT);
  pinMode(output, OUTPUT);
  s.attach(output);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(input);
  Serial.println(val);
  //delay(1000);
  
   { for(int i = 0; i < 180 ; i++)
      {   if( val < 500)
            break;
          s.write(i);
          delay(30);  
      }
      for(int i = 180; i>0 ; i--)
      {   if( val < 500)
            break;
          s.write(i);
          delay(30);  
      }
   }
}
