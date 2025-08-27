#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
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

int pivotElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[0])
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

int findPostion(int arr[], int n, int key)
{
    int pivot = pivotElement(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1]) // go to sexond part
    {
        return binarySearch(arr, pivot, n - 1, key);
    }
    else // go to the first part
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}
int main()
{
    int arr[6] = {13, 17, 2, 6, 9, 11};
    int size = 6;
    int key = 11;
    int postion = findPostion(arr, size, key);
    cout << "postion : " << postion;
}   