#ifndef OBJECTS_H
#define OBJECTS_H

#include <Arduboy2.h>

#define OBJ_SIZE 7
#define ZAPPER_COUNT 3

class Solvalou
{
public:
    Arduboy2 *ab;
//private:
    const float velocity = 0.7;
    float x = OBJ_SIZE / 2;
    float y = HEIGHT / 2;
    uint8_t zapperWaitTime = 0;
    //Zapper zapper[ZAPPER_COUNT] = {NULL};

    Solvalou(Arduboy2 *ab) {
        this->ab = ab;
    };
    void draw();
    void move();
    void shootZapper();
    //被弾判定(敵弾, 敵オブジェクト)
};

class Zapper
{
public:
    const float velocity = 4.0;
    float x;
    float y;

    Zapper(float x, float y) {
        this->x = x;
        this->y = y;
    };
};

#endif