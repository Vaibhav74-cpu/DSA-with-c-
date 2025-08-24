#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int solution(vector<int> &arr) //// & is used to change in both main and solution function
{
    unordered_set<int> setCount;

    // entry: 5,1,5,3,4
    for (int entry : arr)
    {
        if (setCount.count(entry))
        {
            return entry;
        }
        setCount.insert(entry); // 5,1,3,4
    }
    return -1;
}

int main()
{
    vector<int> arr = {5, 1, 5, 3, 4};
    cout << "Duplicate elemtnts" << solution(arr);
}