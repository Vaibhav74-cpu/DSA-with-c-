#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 0

    arr.push_back(2);
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 1

    arr.push_back(4);
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 2

    arr.push_back(5);
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 4

    arr.push_back(6);
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 4

    arr.push_back(8);
    cout << "Memory allocated currently : " << arr.capacity() << endl; // 8
    cout << "total element in array : " << arr.size() << endl;

    cout << "elements in array" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "first element in array : " << arr.front() << endl;
    cout << "last element in array : " << arr.back() << endl;
    cout << "Element at index 3 : " << arr.at(3) << endl;

    arr.pop_back();
    cout << "After pop ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // to copy array in another array
    //  vector<int> last(arr);
    //  for(int i: last){
    //      cout<<i<<" ";
    //  }

    // create and initilize array with 1
    //   vector<int> arry[5,1];
    //   for(int i: arry){
    //     cout<<i;
    //   }

    return 0;
}