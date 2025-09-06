#include<iostream>
using namespace std;
int main(){
    int i=2;  // comopiler create a memory block with name i and store value 2 wieh type integer
    if(true){
        int b=3;
        cout<<b;
    }
    // cout<<b;

    for ( ; i < 10; i++)  // if we not declare intilize value foe loop so it find outside and used for ilteration
    {
        cout<<"hi"<<"\t";
    }
    
}