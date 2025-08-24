#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // char count = 'A';
    while (row <= n)
    {
        int col = 1;
        // char value='@'+row;
        while (col <= n)
        {
            char value = 'A' + row + col - 2;
            cout << value << " ";
            value = value + 1;
            // cout << count<<" ";
            // count = count + 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}