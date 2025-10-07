#include <iostream>
using namespace std;

class A
{
public:
    void say()
    {
        cout << "hello everyone" << endl;
    }
    void say(string name)
    {
        cout << "hello america" << endl;
    }

    // error
    //  int say(string name)
    //  {
    //      cout << "hello america" << endl;
    //  }

    void say(char ch, int name)
    {
        cout << "hello india" << endl;
    }

public:
    int a;
    int b;
    // operator overloading
    void operator+(A &obj)
    {
        int val1 = this->a; // 4 input argument
        int val2 = obj.a;   // 7  (current object)
        cout << "subtraction : " << val2 - val1 << endl;
    }

    void operator()()
    {
        cout << "you are in operator orverloading part" << endl;
    }
};

// method overriding
class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog Barking" << endl;
    }
};

int main()
{
    // function overloading
    A obj;
    obj.say();
    obj.say("vaibhav");
    obj.say('c', 56);

    // operator overloading
    A obj1, obj2;
    obj1.a = 4; // argument
    obj2.a = 7;

    obj1 + obj2;
    obj1();

    // method overriding-> run time polymorphism
    Dog dog;
    dog.speak();
}