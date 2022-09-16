#include<Arduino.h>
#define RedLed 4

void setup() 
{
  pinMode(RedLed,OUTPUT);
}

void loop()
 {
  digitalWrite(RedLed,HIGH);
  delay(200);
   digitalWrite(RedLed,LOW);
  delay(200);
}