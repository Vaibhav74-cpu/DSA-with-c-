#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arrayTwoSum(vector<int> &arr1, int m, vector<int> &arr2, int n) // m=3 and n=2
{
    int i = m - 1;
    int j = n - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 || j >= 0 || carry != 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum = sum + arr1[i--];
        }

        if (j >= 0)
        {
            sum = sum + arr2[j--];
        }

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr1 = {2, 2, 3};
    vector<int> arr2 = {5, 4};
    int m = arr1.size();
    int n = arr2.size();
    vector<int> sum = arrayTwoSum(arr1, m, arr2, n);
    for (int i : sum)
    {
        cout << i;
    }
}