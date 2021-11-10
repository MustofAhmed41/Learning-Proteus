//PIR Detects heat 
int ledPin = 13;
int pirPin = 2;
int pirStat = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pirStat = digitalRead(pirPin);
  if(pirStat == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected");
    delay(1000);
  }else{
    digitalWrite(ledPin,LOW);
    Serial.println("No motion Detected");
    delay(1000);
  }
}
