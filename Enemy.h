#pragma once

class Enemy {
    // Must be protected, because private would mean it would need to be a friend function.
    protected:
        int x;
        int y;
    public:
        // Constructor
        Enemy(int x, int y) : x(x), y(y) {};
        virtual Enemy~()
        {
            std::cout << "Enemy destructed." << std::endl;
        }
        // Making it virtual so that it can work from the derived classes.
        virtual void draw()
        {
            std::cout << "I am an enemy in position (" << this->x << ", " << this->y << ")." << std::endl;
        }
};