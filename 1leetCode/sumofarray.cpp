#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> reverse(vector<int> ans)
{
    int start = 0;
    int end = ans.size();
    while (start <= end)
    {
        swap(ans[start], ans[end]);
        start++;
        end++;
    }

    return ans;
}

vector<int> arrayTwoSum(vector<int> &arr1, int m, vector<int> &arr2, int n)  //m=3 and n=2
{
    int i = m - 1;  //points last digit of array 1
    cout<<i;
    int j = n - 1; //points last digit of array 2
    cout<<j;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;//find carry
        sum = sum % 10;//keep last digit
        ans.push_back(sum);//store the answer in ans array
        i--;
        j--;
    }

    // first case

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second cas2
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    // reverse(ans);
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