void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int data=digitalRead(3);
 if(data==HIGH)
 {
  digitalWrite(5,HIGH);
 }
   else
   {
    digitalWrite(5,LOW);
    }
}
