#include <iostream>
using namespace std;

class Human
{
    // private: //only accessible inside ites own class only
    //     int height;
protected: // access inside his own class or derived or child class
    int height;

public: // accessible everywhere
    int weight;
    int age;

public:
    int getHeight()
    {
        return height;
    }
    void setHeight(int height)
    {
        this->height = height;
    }

    int getAge()
    {
        cout << "parent class" << endl;
        return this->age;
    }
    void setAge(int a)
    {
        this->age = a;
    }
};

class Male : protected Human
{
public:
    string color;

    void sleep()
    {
        cout << "child class" << endl;
    };

    int getHeight(int height)
    {
        return this->height = height;
    }
};

int main()
{
    Male male;
    // male.height = 20;
    cout << "height : " << male.getHeight(20) << endl;
}

/*
you can access the public data memebers of parent class is only in derived class or child class using protected keyword .
*/
