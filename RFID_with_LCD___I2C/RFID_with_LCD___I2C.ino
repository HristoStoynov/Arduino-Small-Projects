#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal_I2C.h>

int RST_PIN = 9;
int SS_PIN = 10;

LiquidCrystal_I2C lcd(0x27,16,2);
MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  
  
  while (!Serial);
  SPI.begin();
  mfrc522.PCD_Init();
  delay(4);
  mfrc522.PCD_DumpVersionToSerial();

  lcd.init();  
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("no stonks");
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.printstr("stonks");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("no stonks");
}
