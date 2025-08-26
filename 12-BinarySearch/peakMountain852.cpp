#include <iostream>
using namespace std;

int peakMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // mid=0
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int arr[7] = {3, 4, 5, 8, 9, 2, 1};
    int size = 7;
    cout << "peak index " << peakMountain(arr, size);
}