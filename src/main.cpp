#include <Arduino.h>

#include <Arduboy.h>
#include "assets.h"

Arduboy ab;

void setup()
{
    ab.beginNoLogo();
    ab.setFrameRate(30);
    ab.clear();

    ab.drawBitmap(0, 0, solvalou, 7, 7, 1);

    ab.display();
}

void loop()
{
    if(!(ab.nextFrame()))
    {
        return;
    }

    // EMPTY
}