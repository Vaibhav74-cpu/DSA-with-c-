#include <iostream>
using namespace std;
int main()
{
    int n; // n=3
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // cout<<col<<" "; // 1 2 3 (firt row)
            cout << n - col + 1<<" ";
            //      3 - 1 + 1 = 3 -> 3 2 1(first row)
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}