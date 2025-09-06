#include <iostream>
using namespace std;
void updateArray(int arr[], int size)
{
    arr[1] = 100;
    cout << "Inside the update function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "go to the main function" << endl;
}
void sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "sum is " << sum << endl;
}

int main()
{

    // int arr[100] = {25, 50,75, 100,};
    int arr[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sum(arr, size);
    
    updateArray(arr, size); // here we send the address of array with postion 1 with value 100

    cout << "printing array for main function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // prostion of arr[1] is 100
    }

    return 0;
}