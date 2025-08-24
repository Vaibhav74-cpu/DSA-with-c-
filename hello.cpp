#include <iostream>  //is the file consist for aleady build functionalires
using namespace std; // standared nampesapce that give me cout for print
int main()           // The code is started form here
{
    cout << "vaibhav" << endl;

    // Dtat types
    int a = 123;
    // cout << a << endl; // print memory address of block a
    int size = sizeof(a);
    // cout<<"size of a :"<<size<<endl;

    float b = 425;
    // cout << b << endl;

    char g = 'a'; // o/p = a
    // cout << g << endl;
    char c = 97;
    // cout << c << endl; // output = a

    bool d = true;
    // cout << d << endl;

    double dd = 25;
    // cout << dd << endl;

    // typecasting

    int aa = 'a';
    // cout << aa << endl; // 97

    char ch = 98;
    // cout << ch << endl; // b

    char ch1 = 1234567;
    // cout << ch1 << endl; // ?

    unsigned int gg = -123; // if i give the sign in unsigned variable it returns huge value(4294967173)
    cout << gg << endl;


    // operators
}

/*
note
<< used for to write
; used for terminate
data is stored in the form of  bit in memory. 1byte = 8bit
in typecasting, if wwe try to add highest value in small memory, he took some last bits and add in it (int binary value store in char)


how to store -ve number in memory
first bit(+ve=0 , -ve=1)
first ignore the sign, then convert into binary afterthat took 1's and 2's complement

*/
