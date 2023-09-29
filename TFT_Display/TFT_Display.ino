#include<evive.h>
void setup() {
  tft_init(INITR_BLACKTAB); // this is used to initialize TFT display
  tft.setRotation(1); // this rotates screen by 90 degrees
  tft.fillScreen(ST7735_BLACK); // this fills dispaly with black color
  tft.setCursor(0,10); // this sets cursor to write on (0,10) location
  tft.setTextColor(ST7735_WHITE); // this sets the text color
  tft.println("Hello World"); // print function
  tft.println("");
  tft.println("My name is Ankur");
  Serial.begin(9600);
}

void loop() {
  if Serial.available(){
    char s = Serial.read();
  }
  tft.println(s);
}
