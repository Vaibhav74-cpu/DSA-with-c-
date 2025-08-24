#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool isEven(int num){
    // true->1, false->0
    if (num & 1)
    { // odd
        return 0;
    }
    else
    { // even
        return 1;
    }
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denomerator = factorial(r) * factorial(n - r);
    return numerator / denomerator;
}

void counting(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
}

bool isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;//not a prime no
        }
    }

    return 1;// is a prime number
}

int main()
{
    int a, b, n, r;
    // cin >> a >> b;
    cin >> n;
    // cin >> r;
    // cout<<power(a, b);
    // int c = power(a, b);
    // cout << c;
    // cout << "factorial of number is " << factorial(n) << endl;
    // cout << "nCr answer is " << nCr(n, r) << endl;
    // cout<<isEven(2);
    // counting(n);
    cout<<isPrime(n);
    

}

/*
nCr= n!/r!*(n-r)!
*/