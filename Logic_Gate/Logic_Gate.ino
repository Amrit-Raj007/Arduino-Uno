
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(1,INPUT);
pinMode(2,INPUT); 
pinMode(3,INPUT); 
pinMode(4,INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
int s1=digitalRead(1);
int s2=digitalRead(2);
int i1=digitalRead(3);
int i2=digitalRead(4);

if(s1==LOW&&s2==LOW){  //AND Gate
  if(i1==HIGH&&i2==HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
    }
    else if(s1==LOW&&s2==HIGH){//OR Gate
      if(i1==HIGH||i2==HIGH){
        digitalWrite(13,HIGH);
      }
      else{
        digitalWrite(13,LOW);
      }
    }

    
    else if(s1==HIGH&&s2==HIGH){ //XOR Gate
      if(i1==i2){
        digitalWrite(13,LOW);
      }
      else{
        digitalWrite(13,HIGH);
      }
    }
     else if(s1==HIGH&&s2==HIGH){ //XOR Gate
      if(i1==HIGH&&i2==HIGH ||i1==LOW&&i2==LOW ){
        digitalWrite(13,HIGH);
      }
      else{
        digitalWrite(13,LOW);
      }
    }
    
}
