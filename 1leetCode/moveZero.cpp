#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 3, 0, 5, 0, 9, 0, 0, 8};

    int nonZero = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0) // 1,3,5,9..
        {
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}