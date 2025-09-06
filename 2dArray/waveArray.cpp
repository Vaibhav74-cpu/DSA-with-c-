#include <iostream>
#include <vector>
using namespace std;

vector<int> spiral(vector<vector<int>> &arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row * col;

    // index initilization
    int startingRow = 0;
    int stratingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // printing starting row
        for (int i = stratingCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending col
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // printing ending row
        for (int i = endingCol; count < total && i >= stratingCol; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // printing starting column

        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(arr[i][stratingCol]);
            count++;
        }
        stratingCol++;
    }
    return ans;
}

vector<int> waveArray(vector<vector<int>> &arr, int row, int col)
{

    vector<int> ans;
    for (int j = 0; j <= col; j++)
    {
        if (j & 1)
        {
            // odd indec-->  bottom to top
            for (int i = row - 1; i >= 0; i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            // even --> top to bottom
            for (int i = 0; i < row; i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

bool searchMatrix(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        //              [rowIndex][colIndex]
        int element = arr[mid / col][mid % col];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    int row, col;
    cout << "Enter size of row and column\n";
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col)); // create 2d arays using vector
    cout << "Enter array elements\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> wave = waveArray(arr, row, col);
    cout << "Wave\n";
    for (int i : wave)
    {
        cout << i << " ";
    }
    cout << endl;

    // spiral matrix
    cout << "print spiral matrix\n";
    vector<int> spiralMat = spiral(arr);
    for (int i : spiralMat)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "enter target value : ";
    int target;
    cin >> target;
    bool binarySearch = searchMatrix(arr, target);
    cout << "The target value present in 2d matrix or not" << binarySearch << endl;
    return 0;
}