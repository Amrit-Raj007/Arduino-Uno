int buzzer = 8 ;
int flame_sensor = 4 ;
int flame_detected ;
void setup()
{
  Serial.begin(9600) ;
  pinMode(buzzer, OUTPUT) ;
  pinMode(flame_sensor, INPUT) ;
}
 



void loop() {
  // put your main code here, to run repeatedly:

  flame_detected = digitalRead(flame_sensor) ;

  if (flame_detected == 0)
  {
    digitalWrite(buzzer, HIGH);
     Serial.println("HIGH");
    delay(50);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    Serial.println("LOW");
    delay(50);
  }
  delay(100);

}
