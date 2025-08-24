#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    // bitwise operator
    cout << "a & b :" << (a & b) << endl;
    cout << "a | b :" << (a | b) << endl;
    cout << "a ^ b :" << (a ^ b) << endl;
    cout << " a~ : " << (~a) << endl;

    // left shift and right shift

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;
    cout << (++i) << endl; // 8
    cout << (i++) << endl; // 8, then increase =9
    cout << (i--) << endl; // 9 then decrease=8
    cout << (--i) << endl; // 7
}

/*
Note
i++ used first then increment
++i first increment then used
i-- used first then done decrement
--i first decrease then used
*/