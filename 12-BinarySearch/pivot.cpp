#include <iostream>
using namespace std;
int pivotElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1; // here index comes 0,1,2
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
    int arr[10] = {5, 8, 10, 1, 3                    };
    int size = 10;
    cout << "pivot element is : " << pivotElement(arr, size);
}