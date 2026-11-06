

LiquidCrystal_I2C lcd(0x27,20,4);

int xc,
 int xb1 = 5
int yc1 = 1
int yc2 = 0
int xb2 = 8
int xc, yc; 
int xb1 = 5;
int yc1 = 1;
int yc2 = 0;
int xb2 = 8;
int yb1 = 1, yb2 = 0; 

int speed = 500;
//inverse relationship betwen val of speed int and speed in the game
@@ -41,9 +42,9 @@
  delay(1000);
 Serial.println(F("<______________________________________________________>>"));
  Serial.println(F("My accounts>>>>"));
  delay(500)
  delay(500);
  Serial.println(F("email||rerer987654321@gamil.com"));
  delay(250)
  delay(250);
  Serial.println(F("Githup|ar7bit"));
  delay(760);
  Serial.println(F("enjoy"));
@@ -55,7 +56,8 @@
  Serial.println(F("<_____________________________________________________>>"));  
  Serial.println(F("app list"));
  Serial.println(F("1.calculator"));
  Serial.println(F("2.car game(comeing soon...."))
  Serial.println(F("2.car game(comeing soon....)"));
  lcd.clear();
  lcd.print("app list");
  lcd.setCursor(0,1);
  lcd.print("1.calculator");
@@ -162,53 +164,52 @@
    Serial.println(result);

  }
  while(Serial.available()<0)
  int r = Serial.read();
  if(r == 2 ){
   lcd.print("game of car");
   Serial.pintln("game of car") 

  if(s == '2'){
   lcd.clear();
   lcd.setCursor(0,0 );
   while(lose = false){
    delay(speed)
    xc++
    xb1--
    xb2-- 
    if(r == w){
      xy++
    }
if(r == s){
      xy--
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
  serial.println("connect lcd to play a game")
  lcd.setCursor(xc,yc);
  lcd.print("C")

  Serial.println("connect lcd to play a game");
  lcd.clear();
  lcd.setCursor(xc,yc);
  lcd.print("C");
  lcd.setCursor(xb1,yb1);
  lcd.print("T")
  lcd.clear();
  lcd.print("T");
  lcd.setCursor(xb2,yb2);
  lcd.print("T")
  lcd.clear();

    if(xc == xb1|yc == yb1||xc == xb2|yc == yb2){
    lose = true
    xc = 0
    yc = 0
    xb1 = 5
    yb1 = 0
    xb2 = 18
    yb2 = 1
    lcd.setCursor(8,0 );
    lcd.print("lose :(")
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
   if(xc = 32,765|lose = false){
   lcd.claer();
   lcd.setCursor(8,0 );
   lcd. print("!!win!!")
   lcd.setCursor(8,1 );
   lcd.print("prees Reset to play Another game")
   }
  }
}
