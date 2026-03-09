#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

long a;
long b;
long result;

void setup() {
  
  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
  Serial.println(F("welcome to braq 0.2"));
  lcd.print(F("welcome to braq"));
    
  delay(2000);
  lcd.clear();
  lcd.print(F("power by arduino"));
  Serial.println(F("power by arduino"));
  
  delay(760);
  lcd.clear();
  lcd.print(F("by ar7bit"));
  Serial.println(F("by ar7bit"));

  delay(1000);
  lcd.clear();

  Serial.println(F("<<For any questions go to my githup and i'll answeryou>>"));
  delay(1000);
 Serial.println(F("<______________________________________________________>>"));
  Serial.println(F("My accounts>>>>"));
  delay(500)
  Serial.println(F("email||rerer987654321@gamil.com"));
  delay(250)
  Serial.println(F("Githup|ar7bit"));
  delay(760);
  Serial.println(F("enjoy"));
delay(1000);
}

void loop() {
  
  Serial.println(F("<_____________________________________________________>>"));  
  Serial.println(F("app list"));
  Serial.println(F("1.calculator"));
  Serial.println(F("2.car game(comeing soon...."))
  lcd.print("app list");
  lcd.setCursor(0,1);
  lcd.print("1.calculator");
  lcd.setCursor(0,2);
  lcd.print("2.car game(comeing soon....)");

  while(Serial.available() <= 0){}

  int s = Serial.read();

  if(s == '1'){
    
    lcd.clear();
    lcd.print("calculator");
           
    delay(750);
    lcd.clear();
    delay(1000);
    
    Serial.println("enter a");
    lcd.print("enter a");

    while(Serial.available() <= 0){}
    a = Serial.parseInt();
  
    Serial.println(a);
    lcd.clear();
    lcd.print(a);

    delay(500);
    lcd.clear();

    Serial.println("enter b");
    lcd.print("enter b");

    while(Serial.available() <= 0){}
    b = Serial.parseInt();

    Serial.println(b);
    lcd.clear();
    lcd.print(b);

    delay(1000);
    lcd.clear();

    Serial.println("enter operator");
    lcd.print("enter op");
   delay(500);
    while(Serial.available() <= 0){}

    switch(Serial.read()){
  
      case '+':
       
        result = a + b;
        lcd.print(a);
        lcd.print("+");
        lcd.print(b);
        lcd.print("=");
        Serial.print(a);
        Serial.print("+");
        Serial.print(b);
        Serial.print("=");
      break;

      case '-':
        result = a - b;
        lcd.print(a);
        lcd.print("-");
        lcd.print(b);
        lcd.print("=");
        Serial.print(a);
        Serial.print("-");
        Serial.print(b);
        Serial.print("=");
      break;

      case '*':
        result = a * b;
        lcd.print(a);
        lcd.print("*");
        lcd.print(b);
        lcd.print("=");
        Serial.print(a);
        Serial.print("*");
        Serial.print(b);
        Serial.print("=");
      break;

        case '/':
        result = a / b;
        lcd.print(a);
        lcd.print("/");
        lcd.print(b);
        lcd.print("=");
        Serial.print(a);
        Serial.print("/");
        Serial.print(b);
        Serial.print("=");
      break;
    }

    lcd.print(result);
    Serial.println(result);
  }
}
//i'll add a butons cntrol but now i am working an braq.0.5v