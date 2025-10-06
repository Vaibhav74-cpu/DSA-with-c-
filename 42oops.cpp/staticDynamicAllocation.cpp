#include <iostream>
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
    char setLevel(char lvl)
    {
        level = lvl;
    }
};

int main()
{
    // static allocation
    Hero vikram;
    vikram.setHealth(60);
    vikram.level = 'A';
    cout << "helth of hero is : " << vikram.getHealth() << endl;
    cout << "level of hero is : " << vikram.level << endl;

    // Dynamic allocation
    Hero *leo = new Hero;
    (*leo).setHealth(70);
    (*leo).level = 'B';
    cout << "health of leo is : " << (*leo).getHealth() << endl;
    cout << "level of leo is : " << (*leo).level << endl;

    // using arrow
    leo->setHealth(80);
    leo->level = 'C';
    cout << "health of leo is : " << leo->getHealth() << endl;
    cout << "level of leo is : " << leo->level << endl;
}
