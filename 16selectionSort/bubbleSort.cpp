#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)  // this loop runs for n-1 times (outer loop)
    {
        for (int j = 0; j < n - i - 1; j++)  // inner loop
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main()
{
    vector<int> arr = {2, 6, 4, 1, 5, 3, 2};
    int size = arr.size();
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    cout<<endl;

    return 0;
}