#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }

    char getLevel()
    {
        return level;
    }
    char setLevel(char lvl, int pwd)
    {
        // if (pwd)
        // {
        //     level = lvl;
        // }
        level = lvl;
    }
};

int main()
{
    Hero vikram;
    vikram.getHealth();   // getter
    vikram.setHealth(50); // setter
    vikram.level = 'A';

    cout << "size " << sizeof(vikram) << endl;
    cout << "health " << vikram.getHealth() << endl;
    cout << "level " << vikram.level;
}

/*
class is a user defined datay type
for the empty class object returns one byte
*/