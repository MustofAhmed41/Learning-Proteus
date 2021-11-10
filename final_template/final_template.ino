#include <LiquidCrystal.h>
#include <Servo.h>
#include <Keypad.h>

LiquidCrystal lcd(47, 48, 50, 51, 52, 53);
LiquidCrystal lcd2(41, 42, 43, 44, 45, 46);

int ledpin1 = 13;
int ledpin2 = 12;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd2.begin(16, 2);
  Serial.begin(9600);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

int a = 10;

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("degree Celcius");
  lcd2.setCursor(0, 0);
  lcd2.print("degree Celcius");
  Serial.println("Hi" + String(a));
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, HIGH);
}
