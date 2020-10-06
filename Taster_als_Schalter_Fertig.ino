#include <OneButton.h>
#define LED 10

OneButton taster(2, false);
bool merkerLed = false;

void setup()
{
  pinMode(LED, OUTPUT);


  taster.attachClick(Taster_Funktion);

}

void loop()
{
  taster.tick();

  delay(10);
  digitalWrite (LED, merkerLed);
}

void Taster_Funktion()
{
  merkerLed = !merkerLed;
}

