#include <TFT_HX8357.h>  // Hardware-specific library

#define BOTON 2

TFT_HX8357 tft = TFT_HX8357();  // Invoke custom library

char bufferString[32];

void setup() {  
  pinMode(BOTON,INPUT);

  tft.init();
  tft.setRotation(1); 
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(4);
}

void loop() {
  //CONCEPTO IPO => INPUT, PROCESS, OUTPUT

  //ENTRADAS
  int p=digitalRead(BOTON);
  int analogo=analogRead(A0);

  //PROCESO
  //SALIDAS
  tft.setCursor(0,0);
  sprintf(bufferString,"Pulsador=%d",p);
  tft.println(bufferString);  

  sprintf(bufferString,"Analogo=%-4d",analogo);
  tft.println(bufferString);

}
