#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
class leecode1207
{
public:
    bool uniqueNumOcuur(vector<int> &arr)
    {

        unordered_map<int, int> frequency;
        for (int num : arr)
        {
            frequency[num]++;
        }

        unordered_set<int> setCount;
        for (auto entry : frequency)
        {
            setCount.insert(entry.second); // second for value
        }

        return setCount.size() == frequency.size();
    }
};
int main()
{
    leecode1207 obj;
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    if (obj.uniqueNumOcuur(arr))
    {
        cout << "true";
    }
    else
    {
        cout << false;
    }
}