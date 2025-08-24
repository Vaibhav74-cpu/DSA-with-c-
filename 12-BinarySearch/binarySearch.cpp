#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // arr[2](9)==13
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid]) // 13>9
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 5, 9, 11, 13, 15};
    int size = 6;

    int index = binarySearch(even, size, 15);
    cout << "index" << index;
}