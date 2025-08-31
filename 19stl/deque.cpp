#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> arr; // deque is an dynmic

    arr.push_back(1);
    arr.push_front(2);
    arr.push_back(4);
    arr.push_back(7);
    cout << "front : " << arr.front() << endl;
    cout << "last element : " << arr.back() << endl;

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // arr.pop_back();
    arr.pop_front(); // here we deleted elemnt 2 from front
    cout << "before erase : -->";
    for (int i : arr)
    {
        cout << i << " ";
    }

    arr.erase(arr.begin(), arr.begin() + 2);
    cout << "after erase : ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}

// erase() is clear the elements in array thay already assign. but memroy remains same
//