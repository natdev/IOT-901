
const int stepPin = 2;
const int dirPin = 5;
void setup() {
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dirPin,HIGH);

for(int x =0; x < 200; x++){
  
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW);
  delayMicroseconds(500);
  
  }
  delay(1000);

  digitalWrite(dirPin,LOW);
  for(int x = 0; x < 400; x++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
    }
 
}
