#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "print the numbers through iteration" << endl;

    // first type
    for (int i = 1; i <= num; i++)
    {
        // cout << i << "\t";
    }
    cout << endl;
    int i = 1;

    // second type
    for (;;)
    {
        if (i <= num)
        {
            // cout << i << "\t"; // print numbers until not false
        }
        else
        {
            // break; // stop loop after if blcoks condition is false
        }
        i++;
    }
}