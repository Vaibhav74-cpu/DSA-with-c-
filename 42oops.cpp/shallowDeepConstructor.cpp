#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    char *name;

    // Default constructor for shallow copy
    Hero()
    {
        cout << endl;
        cout << "defaul/simple constructor called\n\n";
        name = new char[100];
    }

    // copy constructor for deep copy
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1]; // create new array dynamically
        strcpy(ch, temp.name);                      // copy temp.name in ch -->babbar copy in ch i.e. babbar
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    // print
    void print()
    {
        cout << "name : " << this->name << " , ";
        cout << "health " << this->health << " , ";
        cout << "level " << this->level << endl;
        cout << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(70);
    hero1.setLevel('A');
    char name[8] = "babbar";
    hero1.setName(name);

    hero1.print();

    // Hero hero2 = hero1;  //or
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G'; // change name of hero1 -> babbar to gabbar

    hero1.print();

    hero2.print();

    // copy assignment operator
    cout << "copy assignement operator" << endl;
    hero1 = hero2;
    hero1.print();

    hero2.print();
}

/*
shallow copy-> access same memory
deep copy -> access two different memory

shallow copy -> create new array in default constuructor dynamically
deep copy -> create new array in copy constructor dynamically
*/
