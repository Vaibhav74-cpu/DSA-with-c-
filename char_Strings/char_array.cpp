#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char name[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        // if (name[start] != name[end]) //  case sensitive
        if (toLowerCase(name[start]) != toLowerCase(name[end])) // case non sesitive
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

void reversSting(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(name[start++], name[end--]);
    }
    cout << "reverse string is : " << name << endl;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char maxOccurance(string s)
{
    int count[26] = {0};
    // find count of charaters for aabbbccde
    for (int i = 0; i < s.length(); i++)
    {
        // for lowercase
        char ch = s[i]; // a, a ,b
        int number = 0;
        number = ch - 'a'; // a->number1,2
        count[number]++;   // number=1,
    }

    int ans = 0;
    int maximum = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maximum < count[i]) //-1<2 --> max=2 , 2<3-->max=3, ....
        {
            ans = i;            // 1
            maximum = count[i]; // max=3
        }
    }
    return 'a' + ans; // 97+1=>98=>b
}

string replaceSpaces(string &fullName)
{
    string temp = "";
    for (int i = 0; i < fullName.length(); i++)
    {
        if (fullName[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(fullName[i]);
        }
    }
    return temp;
}

int main()
{
    char ch[20]; // represent character array
    for (int i = 0; i < 20; i++)
    {
        cout << ch[i] << " "; // print random values --> T   a  K → @  ≡ ↓ @  h ¶ ♠ ☺
    }
    cout << endl;

    cout << "enter your name" << endl;
    cin >> ch;
    // ch[2] = '\0'; // stop the execution after index 2
    cout << "your name is : " << ch << endl;

    int len = getLength(ch);
    cout << "leght of string is " << len << endl;
    reversSting(ch, len);
    // cout << "reverse string is : " << ch;

    cout << "Palindrome or not: " << isPalindrome(ch, len);
    cout << endl;
    // cout<<toLowerCase(ch);

    string name;
    cout << "enter string for find maxmium occurance character in string" << endl;
    cin >> name;
    cout << "maxmium occurance charactr of string is :" << maxOccurance(name) << endl;

    // string fname="vaibhav hero";
    string fname;
    cout << "Enter your full name: ";
    getline(cin, fname); // input with spaces

    string result = replaceSpaces(fname);
    cout << "Modified string: " << result << endl;
    
    // cout << "Enter a string for adding special character in between" << endl;
    // getline(cin, fname);
    // string result = replaceSpaces(fname);
    // cout << "your modified sting is : " << result;
    return 0;
}