#include <iostream>
using namespace std;

int &update3(int n)
{
    int num = n;
    int &ans = num;
    return ans;
}

void update2(int &n)
{
    n++;
}

void update(int n)
{
    n++;
}

int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}
int Sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int i = 10;
    // int &j = i;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << j;

    // cout << "Before : " << i << endl;
    // update2(i);
    // cout << "After : " << i << endl;

    // cout << update3(i);
    // fun(i);

    // char ch = 'v';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c);

    int n;
    cout << "Enter input :";
    cin >> n;
    int *arr = new int;//create array in heap
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = Sum(arr, n);
    cout << "Answer is :" << ans;
}