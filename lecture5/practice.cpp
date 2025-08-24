#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <= 15; i = i + 2)
    {
        cout << i << " ";
        // if (i & 1)
        // {
        //     continue;
        // }
        i++;
    }

    for (int i = 0; i <= 5; i--)
    {
        // cout << i;
        i++;
    }

    for (int i = 0; i <= 5; i++)
    {
        // cout << i;
        i++; // 0 ,2,4
    }

    // 1
    int num = 3;
    // cout << (25 * (++num)) << endl;

    // 2
    int a, b = 1;
    a = 10;
    if (++a)
    { // 11
      // cout<<b ; //1 executed
    }
    else
    {
        // cout<<++b;
    }

    // 3
    int c = 1;
    int d = 2;

    if (c-- > 0 && ++d > 2)
    {
        // cout<<"inside if";//executed
    }
    else
    {
        // cout<<"inside else";
    }

    // 4
    int e = 1;
    int f = e++; // 1, then increment 2
    int g = ++e; // 3
    // cout << f<<endl;
    // cout << g;
}