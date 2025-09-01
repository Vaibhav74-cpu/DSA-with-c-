#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size(); // 7

    while (i < n) // 0<7
    {
        int j = i + 1;                        // j=1
        while (j < n && chars[i] == chars[j]) // 1<7 && a==a -> j++
        {
            j++;
        }
        chars[ansIndex++] = chars[i]; // char[o]=a
        int count = j - i;            // 2-0=2
        if (count > 1)                // 2>1
        {
            string cnt = to_string(count);
            // cout<<cnt; // 2 2 3
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch; // chars[1]=2
            }
        }
        i = j; // 2
    }
    return ansIndex;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars);
}