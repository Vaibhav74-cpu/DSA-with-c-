#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> person;  //FIFO
    person.push("sam");
    person.push("tom");
    person.push("mary");
    person.push("vaibhav");

    cout << "size of an queue is : " << person.size() << endl;
    cout << "front person in queue is : " << person.front() << endl;
    cout << "last person in queue is : " << person.back() << endl;

    person.pop();
    cout <<"after pop" <<endl;
    cout << "front person in queue is : " << person.front() << endl;
    cout << "last person in queue is : " << person.back() << endl;
    cout << "size of an queue after pop is : " << person.size() << endl;
}