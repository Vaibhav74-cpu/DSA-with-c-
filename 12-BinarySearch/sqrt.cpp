#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

double precision(int num, int precision, int currentSqrt)
{
    double factor = 1;
    double ans = currentSqrt;
    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 38;
    int sqrt = binarySearch(n);
    cout << "decimal with sqrt is " << precision(n, 3, sqrt);
}