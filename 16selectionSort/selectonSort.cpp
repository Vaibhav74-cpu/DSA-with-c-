#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            //  6<3 false
            //  1<3
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    vector<int> arr = {3, 6, 1, 7, 2, 9};
    int size = arr.size();
    selectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}