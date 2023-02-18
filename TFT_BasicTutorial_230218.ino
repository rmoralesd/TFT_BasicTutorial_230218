#include <TFT_HX8357.h>  // Hardware-specific library

#define BOTON 2

TFT_HX8357 tft = TFT_HX8357();  // Invoke custom library

void setup() {  
  pinMode(BOTON,INPUT);

  tft.init();
  tft.setRotation(1); 
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(4);
}

void loop() {
  //CONCEPTO IPO

  //ENTRADAS
  int p=digitalRead(BOTON);
  //PROCESO
  //SALIDAS
  tft.setCursor(0,0);
  tft.print("Pulsador=");
  tft.print(p);
}
