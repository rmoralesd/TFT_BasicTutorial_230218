#include <TFT_HX8357.h>  // Hardware-specific library
TFT_HX8357 tft = TFT_HX8357();  // Invoke custom library

void setup() {  
  tft.init();
  tft.setRotation(1); //5%4=1
  tft.setTextSize(4);
  tft.fillScreen(TFT_BLACK);  
  tft.println("Hello world");
  tft.println("Como estas");
  tft.setTextSize(2);
  tft.println("Muy bien");
}

void loop() {
  
}
