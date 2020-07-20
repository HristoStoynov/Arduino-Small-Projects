int red_light_pin = 11;
int green_light_pin = 10;
int blue_light_pin = 9;

int potPin = A0;
int val = 0;
int colorBlueVal = 0;
int colorRedVal = 0;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
    val = analogRead(potPin);    // read the value from the sensor
    colorBlueVal = val / 4;
    colorRedVal = 255 - val / 4;
    RGB_color(colorRedVal,0,colorBlueVal);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
