#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3, 4};
    int i = 0, j = 0, n;
    cin >> n;
    vector<int> ans;
    while (i < n && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout<<"intersection array is...";
    for (int x : ans)
    {
        cout << x << " ";
    }
}