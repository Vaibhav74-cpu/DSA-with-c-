#include <iostream>
using namespace std;
class myClass
{
public:
    int subtractEquation(int n) //234
    {
        int product = 1;
        int sum = 0;
        while (n != 0) // 234
        {
            int digit = n % 10;        // 4, 3,  2
            product = product * digit; // 4*1 =4 , 4*3=12, 12*2=24
            sum += digit;              // 0+4=4, 4+3=7, 7+2=9

            n = n / 10; // 23, 2 ,0
        }
        int subtract;
        subtract = product - sum; //15
        return subtract;
    }
};
int main()
{
    myClass obj;
    int n;
    cin >> n;
    cout << obj.subtractEquation(n);
    return 0;
}
