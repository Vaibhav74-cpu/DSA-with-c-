#include <iostream>
using namespace std;
class myClass
{

public:
    int count = 0;
    int find_1bit(int n)
    {
        while (n != 0)
        {
            if (n & 1)
            { // true, if last bit is 1
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};
int main()
{
    myClass obj;
    int n;
    cin >> n;
    cout << "Binary bit is " << obj.find_1bit(n) << " for number " << n;
}