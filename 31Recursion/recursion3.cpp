#include <iostream>
using namespace std;
bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    // recursive relation
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

void print(int arr[], int size)
{

    cout << "size of array is " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSerach(int *arr, int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
        return false;

    // recursion relation
    if (arr[0] == key)
        return true;
    else
    {
        bool remainingPart = linearSerach(arr + 1, size - 1, key);
        return remainingPart;
    }
}

void print2(int *arr, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
    print2(arr, s, e);
    // base case
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    cout << "mid value : " << mid << endl;
    if (arr[mid] == key)
        return true;

    // recursive call
    // solve one case
    if (arr[mid] < key)
    {
        // serch in rigth half
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        // search in left helf
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[14] = {2, 4, 1, 7, 9, 15, 19, 22, 26, 32, 36, 38, 42, 49};
    int size = 14;
    int key = 42;

    bool ans2 = binarySearch(arr, 0, 14, key);
    if (ans2)
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }

    // bool ans = isSorted(arr, size);
    // if (ans)
    // {
    //     cout << "array is sorted" << endl;
    // }
    // else
    // {
    //     cout << "Araay is Not sorted " << endl;
    // }

    // bool ans1 = linearSerach(arr, size, key);
    // if (ans1)
    // {
    //     cout << "Present";
    // }
    // else
    // {
    //     cout << "Absent";
    // }
}