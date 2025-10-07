#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int sortedValue = arr[i];
        int j = i - 1; 
        for (; j >= 0; j--)
        {
            if (arr[j] > sortedValue)
            {
                // shift
                arr[j + 1] = arr[j];   
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = sortedValue;
    }

    cout << "sorted array";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {10, 7, 5, 4, 6, 1, 8};
    int size = arr.size();
    insertionSort(arr, size);
}