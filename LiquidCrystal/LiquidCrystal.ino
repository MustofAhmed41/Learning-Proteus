#include <LiquidCrystal.h>

// lcd(rs,en,d4,d5,d6,d7)
 //initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  // put your setup code here, to run once:
   // setup the LCD's number of columns and rows:
  lcd.begin(16,2); //previously we did serial.begin but here we are using 
  //lcd.begin. lcd is of size 16*2. 
  lcd.setCursor(0,0); // 
  lcd.clear();
  lcd.print("Loading/Initializing"); // print message to 
}


void loop() {
  // put your main code here, to run repeatedly:
  //
  lcd.setCursor(0,1); // moving onto second line // column 0, row 1
  delay(3000); 

  lcd.print("MSB Lab - 2"); // printing 
  delay(2000);
  lcd.clear();

  lcd.print("Cursor Blink");
  lcd.blink();

  delay(2000);
  lcd.clear();

  lcd.print("U_Cursor");
  lcd.cursor();

  delay(2000);
  lcd.clear();

  lcd.print("No Cursor");
  lcd.noCursor();

  delay(2000);

  lcd.clear();
  
  lcd.print("Resume");
  lcd.display();
  
  delay(2000);
  lcd.clear();
  
}
