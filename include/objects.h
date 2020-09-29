#ifndef OBJECTS_H
#define OBJECTS_H

#include <Arduboy2.h>

#define OBJ_SIZE 7

class Solvalou
{
public:
    Arduboy2 *ab;
//private:
    const float velocity = 1.0;
    //int8_t x = OBJ_SIZE / 2;
    float x = OBJ_SIZE / 2;
    //int8_t y = HEIGHT / 2;
    float y = HEIGHT / 2;

    Solvalou(Arduboy2 *ab) {
        this->ab = ab;
    };
    void draw();
    void move();
};

#endif