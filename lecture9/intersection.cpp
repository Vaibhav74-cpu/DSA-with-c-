#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4, 5 };
    vector<int> arr2 = {2, 2, 3, 3, 4};
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -2;

                break;
            }
        }
    }

    cout << "intersection is array..";
    for (int num : ans)
    {
        cout << num<<" ";
    }
}