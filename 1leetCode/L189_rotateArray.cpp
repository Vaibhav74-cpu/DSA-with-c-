#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{


    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int rotateBy = 2;
    vector<int> temp(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + rotateBy) % arr.size()] = arr[i];
    }

    arr = temp; //copy temp element to arr
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}