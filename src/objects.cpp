#include "objects.h"
#include "include/assets.h"

void Solvalou::draw()
{
    this->ab->drawBitmap(this->x - (OBJ_SIZE / 2), this->y - (OBJ_SIZE / 2), solvalouImg, OBJ_SIZE, OBJ_SIZE, 1);
}

void Solvalou::move()
{
    if (this->ab->pressed(LEFT_BUTTON))
    {
        this->x -= this->velocity;
    }
    if (this->ab->pressed(RIGHT_BUTTON))
    {
        this->x += this->velocity;
    }
    if (this->ab->pressed(UP_BUTTON))
    {
        this->y -= this->velocity;
    }
    if (this->ab->pressed(DOWN_BUTTON))
    {
        this->y += this->velocity;
    }
}

/*
float Solvalou::getVelocity() {
    return this->velocity; 
}
*/