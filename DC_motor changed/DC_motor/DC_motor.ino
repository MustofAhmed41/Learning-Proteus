int LeftMotorForward = 7;
int LeftMotorReverse = 6;
int RightMotorForward = 8;
int RightMotorReverse = 9;

void setup() {
  Serial.begin(9600);
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(LeftMotorReverse,OUTPUT);
  pinMode(RightMotorForward,OUTPUT);
  pinMode(RightMotorReverse,OUTPUT);
}


//in design, the L293D remains 2 and 7 on and off depending on the code.
// the L293D is motor driver.
//Motor driver circuit is used to control the motors. 
//they act a bridge between controller(arduinos) and motors. because they amplify the current motors.
// input 1 connected to 2 number pin in actual IC, so the pin numbers are not arranged serially.

//in simulations, the pin number arrangement is slightly different from the actual ones,
// that is for our own convenience.
//One IN1 is used to move forward,
//Other IN2 is used to move reverse.

//we can create car, to find objects, suppose of tissue picking

void loop() {
  //FORWARD
  digitalWrite(LeftMotorForward,HIGH);
  digitalWrite(LeftMotorReverse,LOW);
  digitalWrite(RightMotorForward,HIGH);
  digitalWrite(RightMotorReverse,LOW);
  delay(2000);

  //Reverse
  digitalWrite(LeftMotorReverse, HIGH);
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorReverse, HIGH);
  digitalWrite(RightMotorForward, LOW);
  delay(2000);
  
  //Turn left
  digitalWrite(LeftMotorReverse, LOW);
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorReverse, HIGH);
  digitalWrite(RightMotorForward, LOW);
  delay(2000);
  
  //Turn right
  digitalWrite(LeftMotorReverse, LOW);
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorReverse, HIGH);
  digitalWrite(RightMotorForward, LOW);
  delay(2000);

  //STOP
  digitalWrite(LeftMotorReverse,LOW);
  digitalWrite(LeftMotorForward,LOW);
  digitalWrite(RightMotorReverse,LOW);
  digitalWrite(RightMotorForward,LOW);
  delay(2000);  

}




 pinMode(FrontRightMotorForward,OUTPUT);
  pinMode(FrontRightMotorReverse,OUTPUT);
  pinMode(BackRightMotorForward,OUTPUT);
  pinMode(BackRightMotorReverse,OUTPUT);
  pinMode(FrontLeftMotorForward,OUTPUT);
  pinMode(FrontLeftMotorReverse,OUTPUT);
  pinMode(BackLeftMotorForward,OUTPUT);
  pinMode(BackLeftMotorReverse,OUTPUT);
  
  