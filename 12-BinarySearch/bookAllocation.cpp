#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int books, int students, int maxAllowedPages)
{
    int studentCount = 1, pages = 0;
    for (int i = 0; i < books; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > students || arr[i] > maxAllowedPages)
            {
                return false;
            }

            pages = arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> &arr, int books, int students)
{
    if (students > books)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < books; i++)
    {
        sum = sum + arr[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (isValid(arr, books, students, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {10,30,40,20};
    // vector<int> arr = {2, 1, 3, 4};
    int students = 2;
    int books = 4;
    cout << bookAllocation(arr, books, students);
}