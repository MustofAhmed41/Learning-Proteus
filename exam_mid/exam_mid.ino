#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>

int ldr = A4;
int val = 0;

int FrontRightMotorForward = 0;
int FrontRightMotorReverse = 13;

int BackRightMotorForward = 12;
int BackRightMotorReverse = 11;

int FrontLeftMotorForward = 4;
int FrontLeftMotorReverse = 3;

int BackLeftMotorForward = 2;
int BackLeftMotorReverse = 1;

LiquidCrystal lcd(10, 9, 8, 7, 6, 5);

int counter = 0;
char arr[100];

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0); //
  lcd.clear();
  pinMode(FrontRightMotorForward,OUTPUT);
  pinMode(FrontRightMotorReverse,OUTPUT);
  pinMode(BackRightMotorForward,OUTPUT);
  pinMode(BackRightMotorReverse,OUTPUT);
  pinMode(FrontLeftMotorForward,OUTPUT);
  pinMode(FrontLeftMotorReverse,OUTPUT);
  pinMode(BackLeftMotorForward,OUTPUT);
  pinMode(BackLeftMotorReverse,OUTPUT);
}

void loop() {
  
  val = analogRead(ldr);
  lcd.clear();
  if(val<100){
      lcd.print("Stopping");
      lcd.setCursor(0,1); 
      lcd.print("LDR Value :");
      lcd.print(val);
      stopAll();
  }else if(val>=100 && val <=300){
      lcd.print("Going Forward");
      lcd.setCursor(0,1); 
      lcd.print("LDR Value :");
      lcd.print(val);
      stopAll();
      FRForward();
      BRForward();
      FLForward();
      BLForward();
  }else if(val>=301 && val <=500){
      lcd.print("Going Backward");
      lcd.setCursor(0,1); 
      lcd.print("LDR Value :");
      lcd.print(val);
      stopAll();
      FRReverse();
      BRReverse();
      FLReverse();
      BLReverse();
  }else if(val>=501 && val <=700){
      lcd.print("Going Right");
      lcd.setCursor(0,1); 
      lcd.print("LDR Value :");
      lcd.print(val);
      stopAll();
      FRReverse();
      BRReverse();
      FLForward();
      BLForward();
  }else if(val>700){
      lcd.print("Going Left");
      lcd.setCursor(0,1); 
      lcd.print("LDR Value :");
      lcd.print(val);
      stopAll();
      FRForward();
      BRForward();
      FLReverse();
      BLReverse();
  }
  delay(300); 
}

//FR = FRONT RIGHT
//FL = FRONT LEFT
//BL = back left
void FRForward(){
   digitalWrite(FrontRightMotorForward,HIGH);
   digitalWrite(FrontRightMotorReverse,LOW); 
}


void FRReverse(){
   digitalWrite(FrontRightMotorForward,LOW);
   digitalWrite(FrontRightMotorReverse,HIGH); 
}

void BRForward(){
   digitalWrite(BackRightMotorForward,HIGH);
   digitalWrite(BackRightMotorReverse,LOW);  
}

void BRReverse(){
   digitalWrite(BackRightMotorForward,LOW);
   digitalWrite(BackRightMotorReverse,HIGH);  
}


void FLForward(){
   digitalWrite(FrontLeftMotorForward,HIGH);
   digitalWrite(FrontLeftMotorReverse,LOW);  
}

void FLReverse(){
   digitalWrite(FrontLeftMotorForward,LOW);
   digitalWrite(FrontLeftMotorReverse,HIGH);  
}

void BLForward(){
   digitalWrite(BackLeftMotorForward,HIGH);
   digitalWrite(BackLeftMotorReverse,LOW);  
}

void BLReverse(){
   digitalWrite(BackLeftMotorForward,LOW);
   digitalWrite(BackLeftMotorReverse,HIGH);  
}


void stopAll(){
   digitalWrite(FrontRightMotorForward,LOW);
   digitalWrite(FrontRightMotorReverse,LOW); 
   digitalWrite(BackRightMotorReverse,LOW);
   digitalWrite(BackLeftMotorReverse,LOW); 
   digitalWrite(FrontLeftMotorForward,LOW);
   digitalWrite(FrontLeftMotorReverse,LOW); 
   digitalWrite(BackLeftMotorForward,LOW);
   digitalWrite(BackLeftMotorReverse,LOW); 
}
