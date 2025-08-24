#include<iostream>
#include<algorithm>
using namespace std;
void sorted(int arr[], int n){

    int left=0,  right=n-1;
    while (left<right)
    {
        while (arr[left]==0 && left<right )
        {
            left++;
        }
        
        while (arr[right]==1 && left<right)
        {
            right--;
        }
        
        if (left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }
    
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[10]={0,1,1,0,0,1,0,1,0,1};
    sorted(arr, 10);
    printArray(arr, 10);
}