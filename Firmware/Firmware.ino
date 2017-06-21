//Controle de Velocidade do motor CC

#define potenPin A0
#define motorPin 9

int potenValue = 0;

void setup(){
  Serial.begin(9600);
  while(!Serial){}
}

void loop(){
  potenValue = analogRead(potenPin);
  Serial.print("Potenciometro : ");
  Serial.println(potenValue);
  
  analogWrite(motorPin, potenValue/4);
  delay(100);
}
