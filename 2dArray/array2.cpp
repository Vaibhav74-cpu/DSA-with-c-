#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int laragestRow(int arr[][4], int row, int col)
{

    int rowIndex = -1;
    int maxi = INT16_MIN;
    // int sum = 0;
    
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }

        cout << "sum " << sum << endl;
    }
    return rowIndex;
}

void sumOfArray(int arr[][4], int m, int n) // row wise sum
{
    for (int i = 0; i < m; i++) // first it goes to the first low then go inside loop .
    {
        int sum = 0;
        for (int j = 0; j < n; j++) // run the loop until j is not false the go to the outer loop and then increse row number
        {
            sum = sum + arr[i][j];
        }
        cout << "sum = " << sum << endl;
    }
    cout << endl;
}

void sumColWise(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "col wise " << sum << endl;
    }
}
int main()
{
    int arr[3][4];
    cout << "enter array elements\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "enter target value";
    // int target;
    // cin >> target;
    // if(isPresent(arr, target, 3, 4))
    // {
    //     cout<<"element is present\n";
    // }else{
    //     cout<<"element is not present\n";
    // }
    sumOfArray(arr, 3, 4);
    sumColWise(arr, 3, 4);
    int ans=laragestRow(arr, 3, 4);
    cout<<"index of largest row sum is : "<<ans;
}