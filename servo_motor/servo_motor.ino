
#include <Servo.h>


Servo myservo;

int serpos = 0 ;


void setup() {
  // put your setup code here, to run once:
  myservo.attach(9); //attaches the servo to pin number 9
  
}
// servo rotates from 0 to 180 degree
// if we write servo(0), it means -90
// if we write servo(180), it means +90
void loop() {
  // put your main code here, to run repeatedly:
  for(serpos = 0 ; serpos <= 90; serpos = serpos+1){
    myservo.write(serpos);
    delay(20);
  }
  for(serpos=90;serpos>=0;serpos=serpos-1){
    myservo.write(serpos);
    delay(20);
  }  
}
