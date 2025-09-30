#include <iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive reletion
    
    // int smallProblem = factorial(n - 1);
    // int bigProblem = n * smallProblem;

    return n * factorial(n - 1);
}

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    // int smallProblem = power(n - 1);
    // int bigProblem = 2 * smallProblem;

    return 2 * power(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    int pow = power(n);
    cout << pow;
    // cout << ans;
}