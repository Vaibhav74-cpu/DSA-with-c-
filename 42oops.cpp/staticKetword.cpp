#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    static int timeToComplete;
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

    // static function
    static int staticFuction()
    {
        return timeToComplete;
    }
};

int Hero ::timeToComplete = 5;

int main()
{
    // static
    Hero akshay; // destructor called automatically for static allocation

    // static keyword
    cout << "static keyword : " << Hero::timeToComplete << endl;
    cout << "by object : " << akshay.timeToComplete << endl; // not recommended

    cout << "static function : " << Hero::staticFuction() << endl;
}
