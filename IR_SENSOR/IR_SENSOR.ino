int IRSensor = 2;
int LED = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(IRSensor, INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorStatus = digitalRead(IRSensor);

  if(sensorStatus==1){
    digitalWrite(LED,HIGH);    
  }else{
    digitalWrite(LED,LOW);
  }
}
