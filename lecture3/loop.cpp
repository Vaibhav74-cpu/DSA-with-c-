#include <iostream>
using namespace std;
int main()
{

    // while loop
    // int i = 0;
    // int n;
    // cin >> n;
    // int sum = 0;
    // while (i <= n)
    // {
    //     cout << i << "\t";
    //     sum = sum + i;
    //     i += 2;
    // }
    // cout << "\nsum of even number = " << sum;

    //prime or not
    int num;
    int i=2;
    cin>>num;
    while (i<num)
    {
        if (num%i==0)
        {
            cout<<"number is not prime for"<< i<<endl;
        }
        else
        {
            cout<<"number is prime for"<< i <<endl;
        }
        
        
        i += 1;
    }
    
    
}

//fareheneit to celcius table