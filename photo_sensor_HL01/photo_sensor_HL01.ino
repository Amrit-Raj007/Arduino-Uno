int photocellPin = A2;     
int photocellReading;     
int LEDpin = 13;           
void setup(void) {
  pinMode(LEDpin,OUTPUT);
  pinMode(photocellPin,INPUT);
  pinMode(2,INPUT);
  
  Serial.begin(9600);   
}
 
void loop(void) {
  photocellReading = analogRead(photocellPin);  
 
  Serial.print("Analog reading = ");
  Serial.print(photocellReading); 
  digitalRead(2);
  Serial.print("     Digital reading = ");
  Serial.println( digitalRead(2));    
  if (photocellReading>=500)
  {
  digitalWrite(LEDpin, LOW);
  delay(100);
  }
  else
    digitalWrite(LEDpin, HIGH);
    delay(100);
}
