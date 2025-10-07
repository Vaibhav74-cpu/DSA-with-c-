#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void bark()
    {
        cout << "animal barking" << endl;
    }
};

class Human
{
public:
    string color;
    void speak()
    {
        cout << "humans speaking" << endl;
    }
};

// class multiple inheritance
class Hybrid : public Animal, public Human
{
public:
    void hybri()
    {
        cout << "its hybrid inheritance" << endl;
    }
};

int main()
{
    Hybrid obj;
    obj.bark();
    obj.speak();
    obj.hybri();
}