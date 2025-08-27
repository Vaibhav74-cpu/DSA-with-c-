#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggresiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int maxi = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int start = 0;
    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(arr, k, mid)) // right part
        {
            ans = mid;
            start = mid + 1; // to find maxmium value
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    int cows = 3;

    cout << aggresiveCows(arr, cows);
}