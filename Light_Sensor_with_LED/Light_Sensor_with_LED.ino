int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int analogValue = analogRead(A0);
  if(analogValue < 10){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
