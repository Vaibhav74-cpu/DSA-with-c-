#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> arr = {1, 2, 3}; // in case you not assign array element . it assign default 0
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << "first element in array : " << arr.front() << endl;
    cout << "last element in array: " << arr.back() << endl;
    cout << "Empty or not : " << arr.empty() << endl;   // 0 for false
    cout << "Element at index 2 is : " << arr.at(2); //
    return 0;
}