#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // print garbage value for every index
    }
    // cout << endl;
    // cout << "succesfully printed";
}

void printCharArray(char arr[], int size){

    cout<<"array for character : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[15];
    // cout<<arr[1]<<endl;//  printing garbage value
    int n = 15;
    printArray(arr, n);
    cout<<endl;
    // int size = sizeof(arr);
    // cout << "size of array is " << sizeof(arr) << endl;
    // cout<<"length of array is "<< sizeof(arr)/sizeof(int)<<endl;

    int arry[n] = {0};
    // cout<<arry[10]<<endl;// store 0 for every index of an array

    n = 15;
    // cout << endl;
    printArray(arry, n); // arry with size 15
    cout << endl;

    int array[15] = {0, 1};
    int value = 1;
    // cout << "before";
    printArray(array, n);
    // cout << "\nafter";
    for (int i = 0; i < 15; i++)
    {
        array[i] = value;
        cout << array[i] << " ";
    }
    // cout << endl;
    // cout << array[0];
    // cout << array[1];

    int num=15;
    char ch[num]={'a','b','c','d','e'};
    cout<<endl;
    printCharArray(ch, num);
    

    cout<<endl;
    cout<<"Every thing is fine"<<endl;
}