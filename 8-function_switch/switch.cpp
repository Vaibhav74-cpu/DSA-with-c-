#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char oper;
    cout << "enater a first number" << endl;
    cin >> a;
    cout << "enater a second number" << endl;
    cin >> b;
    cout<<"enter a opeation that you want to do"<<endl;
    cin>>oper;
    switch (oper)
    {
    case '+':
        cout << "Addition" << a + b;
        break;
    case '/':
        cout << "Division" << a / b;
        break;
    case '*':
        cout << "Multiplication : " << a * b;
        break;
    case '-':
        cout << "Subtraction" << a - b;
        break;
    case '%':
        cout << "reminder" << a % b;
        break;

    default:
        cout << "no any case match"; break;
    }
}