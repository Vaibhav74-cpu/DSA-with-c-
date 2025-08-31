#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(3);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // binary_search
    cout << "7 present or not" << binary_search(arr.begin(), arr.end(), 7) << endl;

    // lower and upper bound
    cout << "lower bound " << lower_bound(arr.begin(), arr.end(), 7) - arr.begin() << endl;
    cout << "upper bound" << lower_bound(arr.begin(), arr.end(), 9) - arr.begin() << endl;

    int a = 5;
    int b = 10;

    // min and max
    cout << "min=" << min(a, b) << endl;
    cout << "max=" << max(a, b) << endl;

    // swap
    swap(a, b);
    cout << "a=" << a << "b=" << b << endl;

    // reverse
    string abcd = "vaibhav";
    reverse(abcd.begin(), abcd.end());
    cout << "string->" << abcd;

    cout << endl;
    // rotate
    rotate(arr.begin(), arr.begin() + 2, arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort
    sort(arr.begin(), arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }
}