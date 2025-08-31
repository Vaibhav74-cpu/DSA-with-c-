#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> reverseArr(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(11);
    nums.push_back(7);
    nums.push_back(17);
    nums.push_back(15);

    vector<int> rev = reverseArr(nums);
    print(rev);
    
    return 0;
}
