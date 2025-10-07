#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
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

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "child class" << endl;
    }
};

int main()
{
    Male male;

    cout << (male.age = 45) << endl;
    cout << (male.color = "black") << endl;

    // cout << male.height = 161 << endl; error dont assign values like this
    cout << male.weight << endl;
    
    male.setAge(20);
    cout << male.getAge() << endl;
    
    male.sleep();
}