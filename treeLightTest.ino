#include <Adafruit_NeoPixel.h>
#define STRIP1_PIN 2
#define STRIP2_PIN 3
#define STRIP3_PIN 4
#define STRIP4_PIN 5

#define LED_COUNT 235
#define STRIPES_COUNT 4

Adafruit_NeoPixel strips[] = { Adafruit_NeoPixel(LED_COUNT, STRIP1_PIN, NEO_GRB + NEO_KHZ800),
                               Adafruit_NeoPixel(LED_COUNT, STRIP2_PIN, NEO_GRB + NEO_KHZ800),
                               Adafruit_NeoPixel(LED_COUNT, STRIP3_PIN, NEO_GRB + NEO_KHZ800),
                               Adafruit_NeoPixel(LED_COUNT, STRIP4_PIN, NEO_GRB + NEO_KHZ800)
                              };

void setup()
{ 
  
  for(int i = 0; i <= STRIPES_COUNT; i++)
  {
    strips[i].begin();
    strips[i].show();
  }
    
    //leds.setPixelColor(i, 0xFF, 0xFF, 0xFF);   
}

void loop() 
{
  for(int i = 0; i < LED_COUNT; i++)
  {
    for(int j = 0; j < STRIPES_COUNT; j++)
    {
      strips[j].setPixelColor(i, 100, 100, 100);
    }
  }
  for(int j = 0; j < STRIPES_COUNT; j++)
  {
     strips[j].show();
  }
  
}

