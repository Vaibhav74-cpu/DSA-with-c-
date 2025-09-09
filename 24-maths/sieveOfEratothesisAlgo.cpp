#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++) // time complexity is O(n)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int isPrime2(int n)
{ 
    // sieve of eratosthensis
    int count = 0;
    vector<bool> prime(n + 1, true); // mark every number is as prime number number
    prime[0] = prime[1] = false;
    
    for (int i = 2; i < n; i++) // time complexity is O(n(log(log n)))
    {
        if (prime[i]) // if prime then mark as a prime number and then meke other number that are divide by this orther as not prime number
        {
            count++;

            for (int j = 2 * i; j <= n; j += i) // divide other numbers by alredy coming prime number
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "The number is prime " << endl;
    }
    else
    {
        cout << "the given number is not prime " << endl;
    }

    //sieve of eratosthensis
    int primeCount =isPrime2(n);
     cout<<"the number of prime numbers for number less than  : "<< n <<"is : "<<primeCount<<endl;


}