#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
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

// DefaultMain is the older preset programming.
// It will come from Main if the user presses the option on the menu.
int defaultMain() {
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

// Menu system
int main() {
    // If yes in this, go to defaultMain.
    std::cout << "Enemies Abound:" << std::endl << "Would you like to run a default? (Y/N) " << std::endl;
    // "MenuAnswer"
    std::string ma;
    // Get the user input.
    std::cin >> ma;
    // Force the string into lowercase.
    std::transform(ma.begin(), ma.end(), ma.begin(),
    [](unsigned char c){return std::tolower(c); });
    if (ma == "y" || ma == "yes") {
        // Go to defaultMain.
        defaultMain();
        // Quit the program when returning.
        return 0;
    }
    else if (ma == "n" || ma == "no") {
        std::cout << "User Menu:" << std::endl <<
        "1) Create a new enemy." << std::endl <<
        "2) Move an existing enemy." << std::endl <<
        "3) Delete an existing enemy." << std::endl <<
        "4) View the list of enemies." << std::endl <<
        "0) Quit the program." << std::endl;
        while (true) {
            std::cout << "Please type an option: ";
            std::string ma2;
            std::cin >> ma2;
            if (ma2 == "1") {
                // Create the new enemy
                // And then add it to the vector.
            } else if (ma2 == "2") {
                // Move an existing enemy
                // Display all of the vector to the user
                // If it is empty, tell them and repeat.
            } else if (ma2 == "3") {
                // Delete an existing enemy
                // Same as 2
            } else if (ma2 == "4") {
                // View the list of enemies.
            } else if (ma2 == "0") {
                // Break out of the while loop and trigger the end of the program.
                break;
            }
        }
    }

    std::cout << "Closing program.";
    return 0;
}