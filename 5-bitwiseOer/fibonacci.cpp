#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number for fibonacci series";
    cin >> n;
    int firstNum = 0, secondNum = 1;
    // cout << firstNum << " " << secondNum << " ";
    for (int i = 0; i < n; i++)
    {
        int nextNum = firstNum + secondNum;
        cout << nextNum << " ";
        firstNum = secondNum; // firstnum=1
        secondNum = nextNum;  // secondnum=1
    }
}