#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void print()
    {
        cout << "Animal language for speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void dog()
    {
        cout << "dogs are barking at night so much" << endl;
    }
};

class Cat : public Dog
{
public:
    Cat()
    {
        cout << "Cat speak politely" << endl;
    }
};
int main()
{
    // Dog dog;
    Cat cat; // here both constructor of dog and cat class called simultaneously
    cat.print();
    cat.dog();
}