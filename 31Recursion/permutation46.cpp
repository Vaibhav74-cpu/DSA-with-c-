#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    // recursion relation
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1); // R.C.
        // backtracking -->resolve its consistent state while return
        swap(nums[index], nums[j]); // R.C
    }
}

vector<vector<int>> permutation(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}
int main()
{
    int n;
    cout << "enter number of elements for permutation " << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements for permutation";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // call the permutation function
    vector<vector<int>> result = permutation(nums);

    // diplay the possible permutation for given input
    for (auto vec : result)
    {
        cout << "[";
        for (auto val : vec)
        {
            cout << val;
        }
        cout << "]";
    }
}