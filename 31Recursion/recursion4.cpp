#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void reverse(string &name, int i, int j)
{
    cout << "call received  " << name << endl;
    // base case
    if (i > j)
        return;

    swap(name[i], name[j]);
    i++;
    j--;

    // recursion relation
    reverse(name, i, j);
}

bool isPalindrome(string &str, int s, int e)
{
    // base case
    if (s > e)
        return true;

    if (str[s] != str[e])
        return false;
    else
    {
        // recursion function
        return isPalindrome(str, s + 1, e - 1);
    }
}

int power(int a, int b)
{
    // base case
    if (b == 0) // a^b--> 2^0
        return 1;

    if (b == 1) // a^b-->2^1
        return a;

    // recursion relation
    //  a=2 , b=3
    int ans = power(a, b / 2); // 2, 3/2

    if (b % 2 == 0)
    {
        // is even
        return ans * ans;
    }
    else
    {
        // is odd
        return a * ans * ans;
    }
}

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return;

    // solve one case
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // solve remining using recursion
    sortArray(arr, n - 1);
}

int main()
{
    string name = "abcddcba";
    int arr[5] = {2, 1, 5, 7, 4};
    int a, b;
    // cin >> a >> b;
    int ans = power(a, b);
    cout << "Answer is(power) : " << ans << endl;

    // bubble sort
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // reverse(name, 0, name.length() - 1);
    // cout << name;
    cout << endl;
    bool isPalin = isPalindrome(name, 0, name.length() - 1);
    if (isPalin)
    {
        cout << "string is palindrome";
    }
    else
    {
        cout << "string is not palindrome";
    }
}