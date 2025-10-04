#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    // recursion relation
    // excluded
    solve(nums, output, index + 1, ans); // just move i with 1(index++)

    // inclued
    int element = nums[index]; // stored element in output array
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;         // stored the subsets in 'ans' array
    vector<int> output;              // create array for output
    int index = 0;                   // index for pointing the element for excllude or include purpose
    solve(nums, output, index, ans); // call the function
    return ans;                      // return the answer that is came from sove{} function
}

void solveSubsequences(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // recursion relation
    // excluded
    solveSubsequences(str, output, index + 1, ans);

    // included
    char element = str[index];
    output.push_back(element);
    solveSubsequences(str, output, index + 1, ans);
}

vector<string> subSequences(string str)
{
    vector<string> ans;
    string ouptut = "";
    int index = 0;
    solveSubsequences(str, ouptut, index, ans);
    return ans;
}
int main()
{
    // for integer elemnts
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = subsets(arr);
    for (auto subset : result)
    {
        cout << "[";
        for (auto num : subset)
        {
            cout << " " << num << " ";
        }
        cout << "]";
    }

    // for string elements
    string str;
    cout << endl;
    cin >> str;
    vector<string> result1 = subSequences(str);
    for (auto ch : result1)
    {
        // cout << ch << endl;
        cout << (ch.empty() ? "\"\"" : ch) << endl;
    }
}