#include <iostream>
using namespace std;

inline int  getMax(int &a, int &b)
{
    return (a > b) ? a : b;
    // if (a > b)
    // {
    //     cout << a << " is greter" << endl;
    // }
    // else
    // {
    //     cout << b << "is smaller";
    // }
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    //ans = (a > b) ? a : b;
    ans = getMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << ans << endl;
    // getMax(a, b);
}
/*
inline advantage
no function call overhead
no extra memory usages
readability
*/