#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char last = 'A' + n - row;
        //          65+3-1=67=D
        //          65+3-2=66=C
        while (col <= row)
        {
            // char ch = 'A' + row - 1;
            // char ch = 'A' + row + col - 2;
            // cout << ch << " ";

            
            cout << last << " ";
            last = last + 1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}