#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);


byte pins = 11;

int xc, yc; 
int xb1 = 5;
int yc1 = 1;
int yc2 = 0;
int xb2 = 8;
int yb1 = 1, yb2 = 0; 

int speed = 500;
//inverse relationship betwen val of speed int and speed in the game
bool lose = false;// true = lose 
long  a;//frist n in the equation
long b;// second n in the equation
long result;//To display the result
 byte n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;// the n of button// n10 is n zero 
 byte inputmode;
 //_________________________________________________\\|
bool cat// i don't know way i name it cat 
int old_n;//for botton calculator:)
int new_n;//
int result2;
int n[12]// for input read
//void||\\

class apps{
void app1(); 
void app2();

}


apps::app1(){ 
   
  int s = Serial.read();
switch(inputmode){
case '1':
  if(s == '1'){
    
    lcd.clear();
    Serial.println(F("<______________________________________________________>>"));
    lcd.print("calculator||serial");
           
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
  break;
   
   case'0' : 
  
  
   lcd.claer();
   Serial.println(F((<______________________________________________________>>)); 
   Serial.println("calculator||buttons");
   lcd.print("calculator||buttons");
   delay(1000);
   lcd.print("enter a ");
   Serial.println("enter a ");
  while()
  for(int i=0;i<12,i++){
  if(n[i] == 0){
    delay(225);
    switch(i){
    case 1:
    new_n = 1;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n = 0;
    break;
    case 2:
    new_n = 2;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;    
    break;
    case 3:
    new_n=3;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;
    break;
    case 4;
    new_n=4;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;
    break;
    case 5:
    new_n=5;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;
    break;
    case 6:
    new_n=6;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;
    break;
    case 7:
    new_n=7;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0;
    break;
    case 8:
    new_n=8;
    result2=old_n*10+new_n;
    old_n=new_n;
    new_n=0; 
      
    }
   }
  } 
 }
}


void setup() {  
  
 for (int i = 0; i < pins+1; i++){// make pins input 
    pinMode(i,INPUT_PULLUP);
    }  
  
  n[1]=digitalRead(1);//
  n[2]=digitalRead(2);
  n[3]=digitalRead(3);
  n[4]= digitalRead(4);
  n[5]=digitalRead(5);
  n[6]=digitalRead(6);
  n[7]=digitalRead(7);
  n[8]=digitalRead(8);
  n[9]=digitalRead(9);
  n[10]=digitalRead(10);
  n[11]=digitalRead(10);//
  // cat
 
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

lcd.print("chose your cntrol");
 lcd.print("1.seria\2.buttons");
lcd.print("chose with button (1,2)");
  if(n[1] == 0 & n[2] == 1){
  inputmode = 1;// serial  
  }
  else if(n[2] == 0 & n[1] == 1 ){
inputmode= 0;//button

  
  }
  else if(Serial.available() <= 0){
    if(Serial.Read() = 's'){
      inputmode = 1;
    }
  }



  Serial.println(F("<_____________________________________________________>>"));  
  Serial.println(F("app list"));
  Serial.println(F("1.calculator"));
  Serial.println(F("2.car game(comeing soon....)"));
  lcd.clear();
  lcd.print("app list");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("1.calculator");
  lcd.setCursor(0,2);
  lcd.print("2.car game");
  // show app list 
  if(n[1]==0){
    app1();
  }
  
}
