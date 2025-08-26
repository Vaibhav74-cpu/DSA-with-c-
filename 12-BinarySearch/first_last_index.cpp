#include <iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    //       0<6
    while (start <= end) // run loop until the condition is not false
    {                    // 3==3 --> store in mid in ans
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid]) // key is less so search in left side of arrary
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2; // finc mid again until index if not find
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;       // strore mid element in array
            start = mid + 1; // check on the right side of array
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[11] = {3, 3, 3, 3, 2, 3, 2, 2, 3, 5};
    int size = 11;
    int key = 3;

    cout << "first occurence : " << firstOccurence(arr, size, key) << endl;
    cout << "last occurence : " << lastOccurence(arr, size, key);
}