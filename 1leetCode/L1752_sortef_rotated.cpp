#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool solution(vector<int> &arr){
    int count = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[size - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[size - 1] > arr[0])
    {
        count++;
    }
    return count<=1;
}
int main()
{

    vector<int> arr = {2,1,3,4};
    bool ans=solution(arr);
    cout<<ans;
    return 0;
}