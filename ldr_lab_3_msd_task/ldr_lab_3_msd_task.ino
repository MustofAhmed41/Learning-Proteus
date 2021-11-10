int ldr = A4;
int value = 0;

int led = 13;



void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

//ldr is a light dependent resistor, depending on light, the value changes
//ldr can be used in street light system, when day, light will automatically turn on and off
// depending on day and light. During day, ldr value will be
//keep track of the intensity of the values, for street light, intensity will be less
// turn on light then.
//value changes from 10 to 975 
//in real life 

// 10 - 300

void loop(){
  value = analogRead(ldr);
  Serial.println("Intensity of the LDR is = ");
  Serial.println(value);
  if(value>=10){
    if(value<300){
      Serial.println("LIGHT ON");
      digitalWrite(led,HIGH);   
    }else{
      Serial.println("LIGHT OFF");
      digitalWrite(led,LOW);    
    }
  }  
  delay(1000); 
}
