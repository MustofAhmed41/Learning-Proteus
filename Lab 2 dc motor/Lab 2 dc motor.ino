
int LMF = 7; // Pin 7 has Left Motor connected on Arduino boards.
int LMR = 6; // Pin 6 has Left Motor connected on Arduino boards.

void setup()
{
  Serial.begin(9600);
  pinMode(LMF, OUTPUT);  
  pinMode(LMR, OUTPUT);  
}
void loop() {
   // Forward
   
   digitalWrite(LMF, HIGH);
   digitalWrite(LMR, LOW);  
   delay(2000);
   
   // Reverse
   digitalWrite(LMR, HIGH);   
   digitalWrite(LMF, LOW);  
   delay(2000);
   
   // Stop
   digitalWrite(LMR, LOW);  
   digitalWrite(LMF, LOW);   
   delay(2000);
}

