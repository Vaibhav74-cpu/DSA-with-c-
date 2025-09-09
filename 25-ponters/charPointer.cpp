#include <iostream>
using namespace std;
int main()
{
    // charcters operation with pointer
    int arr[5] = {1, 2, 3};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;  // abcde
    cout << *c << endl; // a

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
}