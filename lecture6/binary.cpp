/*
find digit of any binary number
i/o--> 10101
o/p--> 21
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
    while (n != 0)//10101
    {
        int digit = n % 10;//here we find decimaal digit of number
        if (digit==1)
        {
            ans = ans+pow(2, i);
        }
        
        n = n / 10;
        i++;
    }
    cout<<ans<<endl;
}