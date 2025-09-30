#include <iostream>
#define PI 3.14 // it does not take memory spece
using namespace std;

int score = 15;

void a(int &i)
{
    cout << i << endl;

    cout << score << "inside a" << endl;
    score++;
}

void b(int &i)
{
    cout << i << endl;
    cout << score << "inside b" << endl;
}

int main()
{
    // int r = 5;
    // // double pi = 3.14; //took extra memory space ie we used macro or define header file
    // double area = PI * r * r;
    // cout << "area = " << area;

    int i = 5;
    cout << score << "inside main" << endl;
    a(i);
    b(i);
    return 0;
}