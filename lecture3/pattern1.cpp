#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;  // i start from 1 index
    cin >> n;      // n=3
    while (i <= n) // i=1,2,3
    {
        // for each row print 3 star
        int j = 1;
        while (j <= n) //for the each cell of row print number of stars
        {
            cout << "* ";
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
}