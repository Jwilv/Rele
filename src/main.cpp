#include <Arduino.h>
#include <Rele.h>

#define PIN_RELE 0
#define PIN_INPUT_RELE 0

void PinStatement()
{
  pinMode(PIN_INPUT_RELE, INPUT);
}

void setup()
{
  PinStatement();
}

RELE *rele = new RELE(PIN_RELE);

void loop()
{
  if(digitalRead(PIN_INPUT_RELE)){
    rele->On();
  }
}