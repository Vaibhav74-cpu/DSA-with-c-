#include <iostream>
using namespace std;
int main()
{
    // positive and negative number
    int a, b;
    // cin >> a >> b;
    // cout << a << " " << b << endl;
    // a=cin.get();
    // cout<< "ascii value"<<a; // help in find the ascii value of input
    // if (a>b)
    // {
    //     cout<<"A is greater"<<endl;
    // }
    // else if (a!=b)
    // {
    //     cout<<"A is not eaqual to B"<<endl;
    // }

    // else{
    //     cout<<"A is smaller"<<endl;
    // }

    int c=2;
    int d= c+1; // d=3

    if ((c=3)==d)
    {
        // cout<<"if"<<c; //3
    }
    else
    {
        // cout<<"else"<<c+1;
    }
    
    // int e=23;
    // if (e>210)
    // {
    //     cout<<"vaibhav";
    // }
    // else if (e==23)
    // {
    //     cout<<"borakr";
    // }
    // else
    // {
    //     cout<<"kishor";
    // }
    
// uppeacas3 lowecase and numeric
    char ch;
     ch=cin.get();
    if (ch>97 && ch<122)
    {
       cout<<"lowercase"<<ch<<endl;
    }
    else if(ch>65 && ch<90){
        cout<<"uppercase"<<ch<<endl;
    }
    else{
        cout<<"number is lies between 0 to 9";
    }
    
}

/*
note
cin used for read the i/o
cin.get() help in read space, tab, enter
*/