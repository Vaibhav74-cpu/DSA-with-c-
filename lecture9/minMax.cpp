#include <iostream>
using namespace std;

int maxVaue(int arr[], int size)
{
    int maxi = INT16_MIN;
    //  max =-2^31
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);

        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int minValue(int arr[], int size)
{
    int min = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size, arr[100];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maxmium value is " << maxVaue(arr, size) << endl;
    cout << "Minimum value is " << minValue(arr, size);
    return 0;
}

/*
predefined function for find max and min
mini=min(mini, num[i])
maxi=max(maxi, num[i])
*/