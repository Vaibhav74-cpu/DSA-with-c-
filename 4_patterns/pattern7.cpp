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
        while (col <= n)
        {
            // char ch = 'A' + row - 1; // produce character in uppercase
            //         65 + 1-1 = 65 =A (print A until col(inner) loop not end)
            //         65 + 2 - 1=66 =B (print B until col(inner) loop not end)
            
            char ch = 'A' + col-1;
            //         65 + 1-1=65=A, 65+2-1=66=B
            cout << ch << " ";
            col += 1;
        }
        cout << endl;
        row = row + 1;
    }
}