int value = 0;
int lm35 = A3;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(lm35);
  float millivolts = (value/1024.0) * 5 * 1000;
  float cel = millivolts /10;
  float farh = cel *(9/5) +32;

  Serial.print("Temperature = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);

  Serial.print("TEMPERATURE = ");
  Serial.print(farh);
  Serial.print("*F");
  Serial.println();
  delay(1000);

}
