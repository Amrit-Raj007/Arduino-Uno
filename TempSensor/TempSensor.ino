#include <LiquidCrystal.h>
#include "dht.h"
#define dht_apin A1 // Analog Pin sensor is connected to
 int i=0;
dht DHT;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    
    
    /*Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");*/

   for(i=0;i<=1;i++)
   {
    DHT.read11(dht_apin);
    lcd.setCursor(0, i);
    lcd.print("Temp:- ");
    lcd.print(DHT.temperature);

 

    lcd.setCursor(0, (i+1)%2);
    lcd.print("Humid:- ");
    lcd.print(DHT.humidity);
    delay(5000);//Wait 5 seconds before accessing sensor again.
   }
    
    
  //Fastest should be once every two seconds.
 
}
