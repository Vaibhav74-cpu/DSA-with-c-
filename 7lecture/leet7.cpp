#include <iostream>
using namespace std;
class Revese
{
public:
    int ans = 0;
    int reverse(int n)
    {
        while (n != 0)
        {
            int digit = n % 10;
            if ((ans > INT16_MAX / 10) || (ans < INT16_MIN / 10))
            {
                return 0;
            }

            ans = (ans * 10) + digit;

            n = n / 10;
        }
        return ans;
    }
};
int main()
{
    Revese obj;
    int n; 
    cin>>n;
    cout << obj.reverse(n);
}