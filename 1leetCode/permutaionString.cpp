#include <iostream>
#include <string>
using namespace std;
bool checkEqual(int s1[], int s2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool cheackPermuation(string str1, string str2)
{
    int count1[26] = {0};

    // count character in str1
    for (int i = 0; i < str1.length(); i++)
    {
        int index = str1[i] - 'a';
        count1[index]++;
    }

    // traverse string in window
    int windowSize = str1.length();
    int i = 0;
    int count2[26] = {0};

    // runnign and check process for window
    while (i < windowSize && i < str2.length())
    {
        int index = str2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return 1;
    }

    // process nexts
    while (i < str2.length())
    {
        // Add new charcker in window
        char newChar = str2[i];
        int index = newChar - 'a';
        count2[index]++;

        // remove old character in window
        char oldChar = str2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        if (checkEqual(count1, count2))
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    string str1 = "ie";
    string str2 = "eidbaooo";
    cout << cheackPermuation(str1, str2);
}