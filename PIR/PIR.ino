int val = 0;             
void setup() {
  pinMode(2, INPUT);    
  Serial.begin(9600);  
}


void loop(){
  val = digitalRead(2);   
  if (val == HIGH) {         
 
      Serial.println("Motion detected!"); 
     delay(100);
     
  } 
  else {

        Serial.println("NO Motion!");
         delay(100);
        
  }
}
