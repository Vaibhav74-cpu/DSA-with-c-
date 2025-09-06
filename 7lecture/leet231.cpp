/*
i/p--> 1
o/p-->true/1
2^0=1
*/

#include <iostream>
#include <math.h>
using namespace std;

class Power
{
public:
    int ans = 1;
    int solution(int n)
    {
        for (int i = 0; i < 30; i++)
        {
            if (ans == n)
            {
                return true;
            }
            if (ans < INT16_MAX/2)
            {

                ans = ans * 2;
            }
        }
        return false;
    }
};
int main()
{
    Power obj;
    int n;
    cin >> n;
    cout << obj.solution(n);
}