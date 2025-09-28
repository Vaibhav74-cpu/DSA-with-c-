#include <iostream>
using namespace std;
void update(int **p2)
{
    // p2=p2+1;  // no change

    // *p2=*p2+1;  // yes change

    // **p2 = **p2 +1;//  yes change
}
int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << &i << endl;  // store address of i
    cout << ptr << endl; // store address of i in ptr
    cout << "address of ptr" << &ptr << endl;
    cout << ptr2 << endl; // stroe address of ptr in ptr2
    cout << "address of ptr2 : " << &ptr2 << endl;
    cout << i << endl;
    cout << *ptr << endl;
    cout << *ptr2 << endl;

    cout << endl;
    cout << "Before" << i << endl;
    cout << "Before" << ptr << endl;
    cout << "Before" << ptr2 << endl;
    update(ptr2);
    cout << "After : " << i << endl;
    cout << "After : " << ptr << endl;
    cout << "After : " << ptr2 << endl;

    return 0;
}