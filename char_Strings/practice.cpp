#include <iostream>
#include <string>
using namespace std;
string removePart(string str, string part)
{

    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), str.length());
    }
    return str;
}
int main()
{
    string str = "vaibhav";
    string part = "bhav";
    cout << removePart(str, part);
}