
int isObstaclePin = 7;  
int isObstacle = LOW;  
void setup() {
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == HIGH)
  {
    Serial.println("OBSTACLE!! Is Found !!");
  }
  else
  {
    Serial.println("     ");
  }
}
