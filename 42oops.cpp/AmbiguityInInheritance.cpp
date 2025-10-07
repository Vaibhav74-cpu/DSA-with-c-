#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "you are inside A class" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "you are inside B class" << endl;
    }
};

class C : public A, public B
{
public:
    void print()
    {

        cout << "its is C class" << endl;
    }
};

int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
}
