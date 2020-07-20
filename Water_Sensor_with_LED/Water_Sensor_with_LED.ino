int LED = 9;
int waterSensor = 8;

void setup() {
   pinMode(waterSensor, INPUT);
   pinMode(LED, OUTPUT);
}

void loop() {
   if( digitalRead(waterSensor) == HIGH) {
      digitalWrite(LED,HIGH);
   }else {
      digitalWrite(LED,LOW);
   }
}
