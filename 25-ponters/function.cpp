#include <iostream>
using namespace std;
void print(int *p)
{
    cout << p << endl;
    cout << *p;
}

void update(int *p)
{
    // p = p + 1;
    // cout << "update : " << p << endl;

    *p = *p + 1;
    cout << "update : " << *p << endl;
}

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;

    // print(p);
    // cout << "Before : " << p << endl;
    // update(p);
    // cout << "After : " << p << endl;

    // cout << endl;
    // cout << endl;

    cout << "Before : " << *p << endl;
    update(p);
    cout << "After : " << *p << endl;

    int s[5] = {1, 2, 3, 4, 5};
    cout << "sum is : " << getSum(s + 2, 3);
    // it is possible to send part of array through pointers
}