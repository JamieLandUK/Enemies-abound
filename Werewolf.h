#pragma once
#include "Enemy.h"

// Inherits from Enemy.
class Werewolf : public Enemy {
    public:
        // Constructor
        Werewolf(int x, int y) : Enemy(x, y) {};
        ~Werewolf()
        {
            std::cout << "Werewolf destructed." << std::endl;
        };
        void draw()
        {
            std::cout << "I am a werewolf in position (" << x << ", " << y << ")." << std::endl;
        }
};