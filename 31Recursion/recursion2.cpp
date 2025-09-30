#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "source : " << src << "  destination : " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "Reach Home";
        return;
    }

    // peocessing
    src++;

    // recursion relation
    reachHome(src, dest);
}

int fibonacci(int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // recursion ralation
    return (n - 1) + (n - 2);
}

int climbStairs(long long nStairs)
{
    // base case
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;

    // recursive relation or recursive call
    int ans = climbStairs(nStairs - 1) + (nStairs - 2);
    return ans;
}

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    sayDigit(n, arr);

    cout << arr[digit]<<" ";
}

int main()
{
    int src = 1, dest = 10;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven"};
    int n;
    cout << "enter n : " << endl;
    cin >> n;
    sayDigit(n, arr);
    // cout << "fobonacci : " << fibonacci(n) << endl;
    // cout << "Climb stairs : " << climbStairs(n);
    // reachHome(src, dest);
}