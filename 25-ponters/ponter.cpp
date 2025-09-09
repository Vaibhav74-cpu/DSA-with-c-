#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "Value of num is : " << num << endl; // first check mapping address of num in memory symbol table then go there and perform corresponding operation

    // Address operator
    cout << "Address of num is : " << &num << endl; // print the mapping address of num in memory

    double d = 5.4;
    double *p2 = &d;

    int *ptr = &num;

    cout << "Store Address in ptr : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;
    cout << "Address of ptr is : " << &ptr << endl;
    cout << "Size of Integer is : " << sizeof(num) << endl;
    cout << "Size of Pointer is : " << sizeof(ptr) << endl;
    cout << "size of pointer is : " << sizeof(p2) << endl;

    // Bad practice
    //  int *p;
    //  cout << *p; // ponting to garbage address that we do not know

    // Good practice to declare a pointer with 0 means null
    int *p = 0;
    p = &num;
    cout << p << endl;  // return address
    cout << *p << endl; // return value

    double *q = &d;
    cout << "before: " << d << endl;
    (*q)++;
    cout << "after : " << d << endl;

    // copying pointer
    double *dd = q;
    // *q -> d and also *dd-> d
    cout << dd << " " << q << endl;
    cout << *dd << " " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i; //*t=3
    *t = *t + 1; // 3+1=4
    cout << *t << endl;
    cout << "before address of t is : " << t << endl;
    t = t + 1; // fee8 + 4byte = feec
    cout << "After address of t is : " << t << endl;
    return 0;
}