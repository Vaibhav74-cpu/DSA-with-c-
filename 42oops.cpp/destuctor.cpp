#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    // Default constructor
    Hero()
    {
        cout << "defaul/simple constructor called\n\n";
    }

    // parameterised constructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    // your own copy constructor
    Hero(Hero &sharukh)
    {
        cout << "your own copy constructor called" << endl;
        this->health = sharukh.health;
        this->level = sharukh.level;
    }

    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }

    int getLevel()
    {
        return level;
    }
    int setLevel(char lvl)
    {
        level = lvl;
    }

    ~Hero()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    // static
    Hero akshay; // destructor called automatically for static allocation

    // Dynamic
    Hero *govinda = new Hero();
    delete govinda; // destuctor called maually for dynamic allocation
}
