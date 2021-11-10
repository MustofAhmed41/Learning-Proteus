int ldr = A4;
int ldrval = 0;

int led = 13;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

//ldr is a light dependent resistor, depending on light, the ldrval changes
//ldr can be used in street light system, when day, light will automatically turn on and off
// depending on day and light. During day, ldr ldrval will be
//keep track of the intensity of the values, for street light, intensity will be less
// turn on light then.
//ldrval changes from 10 to 975 
//in real life 

// 10 - 300

void loop(){
  ldrval = analogRead(ldr);
  Serial.println("Intensity of the LDR is = ");
  Serial.println(ldrval);
  if(ldrval>=10){
    if(ldrval<=620){
      Serial.println("LIGHT ON");
      digitalWrite(led,HIGH);
    }else{
      Serial.println("LIGHT OFF");
      digitalWrite(led,LOW);
    }
  }
  delay(1000); 
}
