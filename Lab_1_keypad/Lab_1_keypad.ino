#include <Keypad.h>

const byte ROWS =4;
const byte COLS =4;


char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'},
};


byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};
// to make it work in analog, use A0 - A5
// we can't use pin 0 or 1 for keypad connection, because 
// they are used for serial connection. 


Keypad keypad = Keypad(makeKeymap(keys),rowPins, colPins, ROWS, COLS);
//makeKeymap, create mapping


void setup() {
// this setup runs only once
  
  Serial.begin(9600); // begins serial communication
  // 9600 is birthrate, there are others, see them in internet
  //this is data transfer rate.
}

void loop() {
  char key = keypad.getKey(); // recieves the pressed key.

  if(key){
    Serial.println(key);
  }
  
}
