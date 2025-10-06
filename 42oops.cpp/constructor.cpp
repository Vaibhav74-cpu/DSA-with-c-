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

    Hero(int health, char level)
    {
        cout << "this -> " << this << endl
             << endl;
        this->health = health;
        this->level = level;
    }

    // print
    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
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
};

int main()
{
    // duynamic allocation  
    Hero *amir = new Hero;  //default constructor

    // static allocation
    cout << "parameterised constructor" << endl; //paramertersied constuctor
    Hero vikram(50);
    cout << "address of vikram " << &vikram << endl;
    cout << "health of vikram : " << vikram.getHealth() << endl;

    Hero rahul(70, 'c');
    cout << "Address of rahul  " << &rahul << endl;
    cout << "health of rahul is " << rahul.getHealth() << endl;
    cout << "level of rahul is " << rahul.getLevel() << endl;

    // copy constructor
    Hero aamir(10, 'Y');
    aamir.print();

    Hero salman(aamir); // copy aamir constructor in salman
    salman.print();


}
