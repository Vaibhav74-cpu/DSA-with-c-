/*
i/p--> -6
o/p--> binart form,  store in memory ,
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int ans = 0;
    // int i = 0;
    if (n < 0)
    {
        // number is negative
        n = n * (-1); // ignore negative signed
        int ans = 0;
        int i = 0;
        while (n != 0)
        {
            int bit = n & 1;
            // ans = (bit * pow(10, i)) + ans;
            ans = ans + (bit * pow(10, i));
            n = n >> 1;
            i++;
        }
        int newAns = ~ans;   // 1's compliment
        newAns = newAns + 1; // 2's compliment
        cout << "negative number to binary" << newAns;
    }
    else
    {
        // Number is positive
        int ans = 0;
        int i = 0;
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        cout << "for postive number" << ans;
    }
}