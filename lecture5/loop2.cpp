#include <iostream>
using namespace std;
int main()
{

    // continue
    for (int  i = 0; i < 5; i++)
    {
        cout<<"hii"<<endl;
        cout<<"hey"<<endl;
        continue;
        cout<<"hello"; //unreacheable and not executed
    }
    

    // third type
    for (int x = 0, y = 0, z = 5; x < 5, y <= 5, z > 0; x++, y++, z--)
    {
        // cout << x << "\t";
        // cout << y << "\t";
        // cout << z << "\t";
    }

    int n;
    cout << "enter a number ";
    // cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    // cout << "Sum : " << sum << endl;


    //prime or not prime
    bool isPrime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0) // if rem=0 , so add in isPrime variable
        {
            //rem=0-->not prime , rem=not zero--> prime
            // cout<<"not a prime number"<<endl;
            isPrime = 0; 
            break;// if number is not prime so skip checking for oter numbers
        }
        
    }

    if (isPrime==0)
    {
        // cout<<"number not is prime "<<endl;
    }else{
        // cout<<"number is prime"<<endl;
    }
    
    
    
}
