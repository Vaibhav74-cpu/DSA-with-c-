#include <iostream>
using namespace std;

// abstract class
class Shape
{
public:
    virtual void draw() = 0;
    // pure virtual function(abstract)
};

// override abstract class in child class
class Circle : public Shape
{
public:
    void draw()
    {
        cout << " overriding abstract for  derived or child class" << endl;
    }
};
int main()
{
    Shape *s = new Circle();
    s->draw(); // recommended this
    // Circle c;
    // // c.draw();  //not better for optimization
}