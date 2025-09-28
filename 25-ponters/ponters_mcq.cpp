#include <iostream>
using namespace std;

void increment(int **p)
{
    ++(**p);
}
void update(int *p)
{
    *p = *p * 2;
}
int main()
{
    /*int first = 8;
    int second = 18;
    int *ptr = &second;

    *ptr = 9;
    cout << first << " " << second << endl;
    */

    // mcq 2
    /*int first = 6;
    int *ptr = &first;
    cout << (*ptr)++ << endl;
    cout << first << endl;*/

    // //mcq
    // int *ptr = 0; // null
    // int first = 10;
    // // *ptr = first; // error ptr = &first-->coorect
    // ptr = &first;
    // cout << *ptr << endl;

    // mcq
    // int first = 8;
    // int second = 11;
    // int *third = &second; // third =11
    // first = *third;       // first =11
    // *third = *third + 2;  // third =13
    // cout << first << " " << second << endl;

    // mcq
    //  float f = 12.5;
    //  float p = 21.5;
    //  float *ptr = &f;
    //  (*ptr)++;
    //  *ptr = p;
    //  cout << *ptr << " " << f << " " << p << endl;

    // mcq
    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // mcq
    // int arr[] = {11, 21, 45, 56};
    // cout << *(arr) << " " << *(arr + 1) << endl;

    // mcq
    // int arr[] = {11, 21, 25};
    // cout << (arr + 1) << endl;

    // // mcq
    // int arr[6] = {11, 21, 23, 56};
    // int *p = arr;
    // cout << p[2];// p[2]-->*(p+2)

    // int arr[] = {11, 21, 25, 28};
    // int *ptr = arr++; // we cannt update in symbol table  :error
    // cout << *ptr << endl;

    // mcq
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;

    // mcq
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;

    // mcq
    //  char str[] = "vaibhav";
    //  char *p = str;
    //  cout << str[0] << " " << p[0];

    // mcq
    // int i = 10;
    // update(&i);
    // cout << i;

    // mcq
    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;

    // mcq
    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;

    // mcq
    int nums = 110;
    int *p = &nums;
    increment(&p);
    cout << nums;
    return 0;
}