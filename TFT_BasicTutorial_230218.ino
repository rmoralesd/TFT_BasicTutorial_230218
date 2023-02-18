#include <TFT_HX8357.h>  // Hardware-specific library

#define BOTON 2
#define LED 3

TFT_HX8357 tft = TFT_HX8357();  // Invoke custom library

char bufferString[32];
int ledState;

void setup() {  
  pinMode(BOTON,INPUT);
  pinMode(LED,OUTPUT);

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
  if(p==HIGH){
    ledState=LOW;
  }else if(analogo>512){
    ledState=HIGH;
  }
  
  //SALIDAS
  tft.setCursor(0,0);
  sprintf(bufferString,"Pulsador=%d",p);
  tft.println(bufferString);  

  sprintf(bufferString,"Analogo=%-4d",analogo);
  tft.println(bufferString);

  sprintf(bufferString,"Led=%d",ledState);
  tft.println(bufferString);

  digitalWrite(LED,ledState);

}
