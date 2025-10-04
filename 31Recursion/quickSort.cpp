#include <iostream>
#include <algorithm>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        // count element less the pivot
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // here we find right pivot index and then put it is in the right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // conditins
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot) // if left element are alredy less than pivot
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j++]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // recursion relation
    // sort left part first
    quickSort(arr, s, p - 1);

    // sort right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
why merge sort is preferred most for linked list over quick sort
why quick sort is preferred most for sorting array
quick sort is stable algorithm
*/