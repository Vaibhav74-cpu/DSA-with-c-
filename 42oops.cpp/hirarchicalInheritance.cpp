#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "you are inside function1 in parent class" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "you are inside function2 in B class " << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "you are inside function3 in C class " << endl;
    }
};
int main()
{
    A a;
    a.func1();

    cout << endl;

    B b;
    b.func1();
    b.func2();

    cout << endl;

    C c;
    c.func1();
    // c.func2(); // func2 is not member of class C and class A
    c.func3();
}

// one parent multiple children