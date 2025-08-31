#include <iostream>
#include <map> // map is hold values in key vallue pair
using namespace std;
int main()
{
    map<int, string> name;
    name[1] = "vaibhav";
    name[3] = "sagar";
    name[3] = "sagar";
    name[3] = "sagar";
    name[10] = "hamza";
    name[5] = "sayyed";
    name[5] = "sayyed";
    name.insert({11, "saad"});

    for (auto i : name)
    {
        cout << i.first << " ";  // first for key
        cout << i.second << " "; // second for pair
    }
    cout << endl;
    name.erase(3);
    cout << "after erase" << endl;
    for (auto i : name)
    {
        cout << i.first << " ";  // first for key
        cout << i.second << " "; // second for pair
    }

    cout << endl;
    auto it = name.find(5);
    for (auto i = it; i != name.end(); i++)
    {
        cout << (*i).first << " ";
    }
    cout << endl;

    cout << "5 presentt or not" << name.count(5) << endl;
    cout << "15 presentt or not" << name.count(15);
}

/*
note :
map function also hold an unique value with key-value pair
insert() function is used to insert the value in key value pair
find function is used to find the key first and then perform opeartion
count() is used to find the element is present or not
erase() function is used to erase the element in array with its correspondin key value
*/