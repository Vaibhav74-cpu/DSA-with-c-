#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> arr;
    arr.insert(5);
    arr.insert(5);
    arr.insert(8);
    arr.insert(8);
    arr.insert(8);
    arr.insert(9);
    arr.insert(9);
    arr.insert(9);
    arr.insert(0);
    arr.insert(0);
    arr.insert(0);

    for (int i : arr)
    {
        cout << i << " ";
    }

    set<int>::iterator it = arr.begin();
    it++;
    arr.erase(it);
    // arr.erase(arr.begin());

    cout << "after erase" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "present or not" << arr.count(9) << endl;
    cout << "present or not" << arr.count(77) << endl;

    set<int>::iterator itr = arr.find(8);
    for (auto i = itr; i != arr.end(); i++)
    {
        cout << *i << " ";
    }
}

/*
note:
set function only store or hold the unique values in its array
count function used to find the element is present or not
find function find the element (and is bring the reference )
iterator helps in for iteration any value
*/