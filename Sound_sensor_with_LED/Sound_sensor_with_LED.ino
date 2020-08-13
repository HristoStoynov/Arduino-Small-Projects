int soundSensor=2;
int LED=13;
boolean LEDStatus=false;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);

}

void loop() {

  int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
        delay(500);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
        delay(500);
    }
  }
 } 
