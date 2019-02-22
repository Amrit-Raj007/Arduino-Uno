int soundSensor=A2;
int LED=13;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
 Serial.begin (9600);
}

void loop() {

  int SensorData=analogRead(soundSensor); 
  Serial.println(SensorData);
  if(SensorData>=200)
  {
        digitalWrite(LED,HIGH);
        delay(100);
        // digitalWrite(LED,LOW);
    }
    else
    {
        digitalWrite(LED,LOW);
        delay(100);
    }
  }
 
