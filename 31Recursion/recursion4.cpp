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

int main()
{
    string name = "abcddcba";
    // reverse(name, 0, name.length() - 1);
    cout << name;
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