#include "DHT.h"
#define dht_apin A0
#define dht_type DHT11
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
DHT dht(dht_apin, dht_type);
LiquidCrystal_I2C lcd(0x27,16,2);
 
void setup(){
  Serial.begin(9600);
  lcd.init();  
  lcd.backlight();
  dht.begin();
}
 
void loop(){
    int t = dht.readTemperature();
    int h = dht.readHumidity();

    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(t);
    lcd.print((char)223);
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Humidity: ");
    lcd.print(h);
    lcd.print("%");
    
    delay(5000);
}
