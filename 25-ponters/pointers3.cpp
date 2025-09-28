#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;

    // *p2 = *p2 + 1; //there is be change

    **p2 = **p2 + 1;
}
int main()
{
    int i = 7;
    int *ptr = &i;
    int **ptr2 = &ptr;
    /*
    cout << "1st : " << i << endl;
     cout << "2nd : " << &i << endl;
     // cout << "3rd : " << &i << endl;

     cout << "4th : " << ptr << endl;
     cout << "5th : " << &ptr << endl;
     cout << "6th : " << *ptr << endl;

     cout << "7th : " << ptr2 << endl;
     cout << "8th : " << &ptr2 << endl;
     cout << "9th : " << **ptr2 << endl;

     cout << i << endl;
     cout << *ptr << endl;
     cout << **ptr2 << endl;
    */

    cout << "Before : " << i << endl;
    cout << "Before : " << ptr << endl;
    cout << "Before : " << ptr2 << endl;
    update(ptr2);
    cout << "After : " << i << endl;
    cout << "After : " << ptr << endl;
    cout << "After : " << ptr2 << endl;
}