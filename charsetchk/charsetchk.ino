 #include <LiquidCrystal.h>
  LiquidCrystal lcd(8, 9, 6, 5, 4, 3);
   char arrowChar=220;

   #define ARROW_LFT_CHAR (char)(127)
          #define ARROW_RGT_CHAR (char)(126)
          #define DEGREE_CHAR    (char)(223)
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

}
char x=0;
short y;
uint8_t pos=0;
uint8_t k=245,m=0;
void loop() {
/*  // put your main code here, to run repeatedly:
  y=x;
   lcd.setCursor(0,0);
          lcd.print(x);
            lcd.setCursor(5,0);
          lcd.print(arrowChar);
             lcd.setCursor(0,1);
          lcd.print(y);
          delay(300);
          x++;*/
         /*  lcd.setCursor(0,pos);
          lcd.print(arrowChar++);
           lcd.setCursor(0,1);
          lcd.print((uint8_t)arrowChar);*/
          #define ARROW_LFT_CHAR (char)(127)  // <-
          #define ARROW_RGT_CHAR (char)(126)  // ->
          #define DEGREE_CHAR    (char)(223)  // deg
  /*        
   lcd.setCursor(0,0);
   lcd.println(" Servo Position ");
   lcd.setCursor(0,1);
   lcd.write(" (-)        (+)");
   lcd.setCursor(2,1);
   lcd.write( ARROW_LFT_CHAR);
   lcd.setCursor(13,1);
   lcd.write(ARROW_RGT_CHAR);
   
   lcd.setCursor(6,1);
    lcd.print(k);
    k++;
    lcd.setCursor(10,1);
    lcd.write(DEGREE_CHAR);
    lcd.setCursor(11,1);*/
    if(m==0){
    delay(200);
    //lcd.write('*');
    lcd.setCursor(3,1);
    lcd.write((char)255);
     delay(400);
     m=1;
    }
           //pos==1?pos--:0; 
          

}
