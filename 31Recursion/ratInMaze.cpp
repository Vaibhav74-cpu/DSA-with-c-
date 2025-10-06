#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // recursive call
    visited[x][y] = 1; // move when next state is in open scope

    // we have 4 choices D, L,R,U

    // down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // upper
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0; // resolve arr its original state while returning
}

vector<string> path(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    if (m[0][0] == 0) // return if there is initial src is not open
        return ans;

    // initially src is o,0
    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = m;
    // intilized visited array with 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()   
{
    int n;
    cout << "Enter matrix size" << endl;
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));
    cout << "Enter elements for array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    vector<string> result = path(m, n);

    cout << "The give array is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Possible path are : ";
    if (result.empty())
    {
        cout << "no path found";
    }
    else
    {
        for (auto path : result)
        {
            cout << path << " ";
        }
    }
}