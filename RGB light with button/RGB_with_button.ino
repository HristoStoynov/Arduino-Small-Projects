int red_light_pin = 11;
int green_light_pin = 10;
int blue_light_pin = 9;
int button_pin = 2;

int buttonState = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}

void loop() {
  buttonState = digitalRead(button_pin);

  if (buttonState == HIGH) {
    RGB_color(0,255,0);
  } else {
    RGB_color(0,0,255);
  }
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
