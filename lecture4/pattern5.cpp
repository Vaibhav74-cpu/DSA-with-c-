#include <iostream>
using namespace std;
int main()
{
    int n; // n=3
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            // cout << "* ";
            cout << value << " ";
            value = value + 1;
            // cout << count << " ";
            // count = count + 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}