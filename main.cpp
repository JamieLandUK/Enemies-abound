#include <iostream>
#include <vector>
#include "Zombie.h"
#include "Werewolf.h"
#include "Enemy.h"

void drawEnemies(std::vector<Enemy*> v) {
    // Goes through every pointer in the vector
    for (int i = 0; i < v.size(); i++) {
        // Draws each one.
        v[i]->draw();
    }
}

int main() {
    // Collects all pointers into one vector to be sent to drawEnemies().
    std::vector<Enemy*> v;

    // Creates an enemy object at location x and y.
    Enemy eObj(1, 1);
    Enemy *ePtr = &eObj;
    v.push_back(ePtr); // Could also have been ePtr->draw(); for each.

    // Creating a zombie (derived class of Enemy).
    Zombie zObj(6, 2);
    // Pointer to the base class from the derived class.
    Enemy *zPtr = &zObj;
    // Sending to the vector to be sent to "drawEnemies()".
    v.push_back(zPtr);

    Werewolf wObj(4, 3);
    Enemy *wPtr = &wObj;
    v.push_back(wPtr);

    Zombie z2Obj(5, 5);
    Enemy *z2Ptr = &z2Obj;
    v.push_back(z2Ptr);

    // Trigger all of the objects to print what and where they are.
    drawEnemies(v);

    return 0;
}