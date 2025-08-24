#include <iostream>
using namespace std;
int main()
{
    int amount = 100;
    cout << "1.Hundred\n2.10s\n3.20s" << endl;
    int ruppee;
    cin >> ruppee;
    switch (ruppee)
    {
    case 1:
        cout << amount / 100;
        break;
    case 2:
        cout << amount / 10;
        break;
    case 3:
        cout << amount / 20;
        break;

    default:
        exit;
    }
}