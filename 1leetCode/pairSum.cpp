#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pairSum(vector<int> &arr, int s)
{

    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << "Pairs with sum " << s << " are:" << endl;
    for (auto pair : ans)
    {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
        cout << "Sum is : " << pair[0] + pair[1];
    }
}

int main()
{
    vector<int> arr1 = {2, 2, 5, 6, 7, 5, 8, 9, 1, 4};
    // vector<vector<int>> ans;
    int givenSum = 7;

    pairSum(arr1, givenSum);
}