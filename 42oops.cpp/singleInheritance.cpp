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
    Dog()
    {
        cout << "dogs are barking at night so much" << endl;
    }
};
int main()
{
    Dog dog;
    dog.print();
}