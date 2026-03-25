#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

int xc, yc; 
int xb1 = 5;
int yc1 = 1;
int yc2 = 0;
int xb2 = 8;
int yb1 = 1, yb2 = 0; 

int speed = 500;
//inverse relationship betwen val of speed int and speed in the game
bool lose = false;// true = lose 
long a;//frist n in the equation
long b;// second n in the equation
long result;//To display the result

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
  delay(500);
  Serial.println(F("email||rerer987654321@gamil.com"));
  delay(250);
  Serial.println(F("Githup|ar7bit"));
  delay(760);
  Serial.println(F("enjoy"));
delay(1000);
}

void loop() {
  
  Serial.println(F("<_____________________________________________________>>"));  
  Serial.println(F("app list"));
  Serial.println(F("1.calculator"));
  Serial.println(F("2.car game(comeing soon....)"));
  lcd.clear();
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

  if(s == '2'){
   lcd.clear();
   lcd.print("game of car");
   Serial.println("game of car"); 
   delay(1000);
   
   while(lose == false){
    delay(speed);
    xc++;
    xb1--;
    xb2--; 
    
    if(Serial.available() > 0){
      int s = Serial.read();
      if(s == 'w'){ yc = 0; }
      if(s == 's'){ yc = 1; }
    }

  Serial.println("connect lcd to play a game");
  lcd.clear();
  lcd.setCursor(xc,yc);
  lcd.print("C");
  lcd.setCursor(xb1,yb1);
  lcd.print("T");
  lcd.setCursor(xb2,yb2);
  lcd.print("T");

    if((xc == xb1 && yc == yb1) || (xc == xb2 && yc == yb2)){
    int skip=2000;
    lose = true;
    xc = 0;
    yc = 0;
    xb1 = 5;
    yb1 = 0;
    xb2 = 18;
    yb2 = 1;
    lcd.setCursor(8,0);
    lcd.print("lose :(");
    lcd.setCursor(8,1);
    lcd.print( "prees s to skip"); 
    if(s == 's' ){
      skip = 1;
    }
   delay(skip);
    }
   }
  }
}
//i'll add a butons cntrol soon, but now i am working an braq.0.5v
