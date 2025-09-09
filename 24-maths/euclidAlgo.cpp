#include <iostream>
using namespace std;
bool isPrime(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1) // if exponent is odd 
        {
            res = (1LL * (res) * (x) % m) % m; 
        }
        x = (1LL * (x) % m * (x) % m) % m; //square x
        n = n >> 1; //divide by 2
    }
    return res;
}
int main()
{
    // int a, b;
    // cout << "Enter two numbers \n";
    // cin >> a >> b;
    // bool ans = isPrime(a, b);
    // cout << "GCD of a and b is : " << a << " " << b << ans;


    int base, exponent, modulo;
    cout<<"Enter base (x)"<<endl;
    cin>>base;
    cout<<"Enter exponent (n) : "<<endl;
    cin>>exponent;
    cout<<"Enter modulo (m)\n";
    cin>>modulo;

    cout<<"Result : "<<modularExponentiation(base, exponent, modulo);

}