int ldp1 = 13;
int ldp2 = 12;
int ldp3 = 11;


void setup() {
	  pinMode(ldp1,OUTPUT);
	  pinMode(ldp2,OUTPUT);
	  pinMode(ldp3,OUTPUT);
}

void loop() {
      digitalWrite(ldp1,HIGH);
      delay(500);
      digitalWrite(ldp1,LOW);
      delay(500);

      digitalWrite(ldp2,HIGH);
      delay(500);
      digitalWrite(ldp2,LOW);
      delay(500);

      digitalWrite(ldp3,HIGH);
      delay(500);
      digitalWrite(ldp3,LOW);
      delay(500);
}
