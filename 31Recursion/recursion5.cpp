#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1; // length of first array
    int len2 = e - mid;     // length of second array

    int *first = new int[len1];  // copy elements in first array
    int *second = new int[len2]; // copy elements in second array

    int mainArrayIndex = s; // take variable that start with s
    // int start = s; // take variable that start with s

    // copy values in first array
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++]; // stored elements in first array
    }

    // int k = mid + 1;
    // copy values in second array
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++]; // stored elements in second array
    }

    // merge2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) // iterate until first array size is true or second array sice is true
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // check seperately
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    // check seperately
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // recursion relation
    int mid = s + (e - s) / 2;

    // call for lefy sort array
    mergeSort(arr, s, mid);

    // call for righy sort array
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int main()
{
    int arr[17] = {2, 6, 8, 9, 6, 4, 5, 7, 9, 11, 13, 18, 17, 19, 15, 14, 25};
    int n = 17;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}