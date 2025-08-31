#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> person; //LIFO
    person.push("sagar");
    person.push("rahul");
    person.push("sam");
    person.push("tom");

    cout << "size of array is : " << person.size() << endl;
    cout << "top in stack person is : " << person.top() << endl;
    person.pop();
    cout << "topp person in array after pop : " << person.top() << endl;

    cout << "size of array is : " << person.size() << endl;
}