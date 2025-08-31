#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // copy the remaining elements of an array
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // copy the remaining element of an array
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void print(int ans[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};

    mergeArray(arr1, 6, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}