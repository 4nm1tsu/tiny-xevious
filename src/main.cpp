#include <Arduino.h>

#include <Arduboy2.h>
#include <SPI.h>
#include "include/assets.h"
#include "objects.h"

Arduboy2 ab;
Solvalou *solvalou = new Solvalou(&ab);

void setup()
{
    ab.begin();
    ab.setFrameRate(60);
    ab.clear();

    //ab.drawBitmap(0, 0, solvalouImg, 7, 7, 1);
    solvalou->draw();

    ab.display();
}

void loop()
{
    ab.clear();
    if(!(ab.nextFrame()))
        return;
    solvalou->move();
    solvalou->draw();
    ab.display();
}