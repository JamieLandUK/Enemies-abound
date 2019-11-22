#pragma once
#include "Enemy.h"

class Zombie : public Enemy {
    public:
        Zombie(int x, int y) : Enemy (x, y) {};
        Zombie~()
        {
            std::cout << "Zombie destructed." << std::endl;
        };
        void draw()
        {
            std::cout << "I am a zombie in position (" << x << ", " << y << ")." << std::endl;
        }
};