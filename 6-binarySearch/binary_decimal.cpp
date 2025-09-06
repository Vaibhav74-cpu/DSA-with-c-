/* 
find the binary form of number 21-->10101
i/p->21 , o/p-->10101
*/  
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;   //find the bit of number ,
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Anwer is " << ans << endl;
}