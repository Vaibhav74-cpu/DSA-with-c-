#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {22, 122, 41, 67};
    cout << "Address of first block in  array is " << arr << endl;
    cout << "Address of first block in  array is " << arr[0] << endl;
    // cout << "Address of first block in  array is " << arr[0] << endl;   //garbage value
    cout << "Address of first block in  array is " << &arr[0] << endl;

    cout << "3rd : " << *arr << endl;
    cout << "4th : " << *arr + 1 << endl;
    cout << "5th : " << *(arr + 1) << endl; // address + 4byte = 122
    cout << "6th : " << *(arr) + 1 << endl; // 22+1=23
    cout << "7th : " << arr[2] << endl;
    cout << "8th : " << *(arr + 2) << endl; // address + 2(8byte)

    int i = 3;
    cout << i[arr] << endl;
    // note   arr[i] = *(arr+i)
    //        i[arr] = *(i+arr)

    int temp[10] = {1, 2};
    cout << "9th : " << temp << endl;      // address
    cout << "10th : " << *temp << endl;    // value
    cout << "11th : " << &temp << endl;    // address
    cout << "12th : " << &temp[0] << endl; // address

    cout << "13th size is : " << sizeof(&temp[0]) << endl;
    cout << "13th size is : " << sizeof(*temp) << endl;

    int *ptr = &temp[0];
    cout << "size : " << sizeof(ptr) << endl;
    cout << "size : " << sizeof(*ptr) << endl;
    cout << "size : " << sizeof(&ptr) << endl;

    int a[10];
    // ERROR
    //  a = a + 1;

    int *pt = &a[0];
    cout << pt << endl;
    pt = pt + 1;
    cout << pt << endl;
}