#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

void reverseArray(int arr[], int size){
    for (int i = size-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[50];
    int size, key;
    
    cout << "Enter the size for an array" << endl;
    cin >> size;
    
    cout << "Eenter the element for array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Reverse array is.."<<endl;
    reverseArray(arr, size);


    
    // cout << "Enter the key" << endl;
    // cin >> key;
    
    // bool keyFound = linearSearch(arr, size, key);
    // if (keyFound)
    // {
    //     cout << "key is present " << endl;
    // }
    // else
    // {
    //     cout << "key is absent";
    // }


    
    return 0;
}