
/** Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise. */

#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        std::unordered_map<int, int> map_a; /** map_a<元素， 出现的次数> */

        for (auto x : arr)
        {
            map_a[x]++;
        }

        std::unordered_set<int> set_a;

        for (auto map : map_a)
        {
            if (set_a.count(map.second))
            {
                return false;
            }
            else
            {
                set_a.insert(map.second);
            }
        }

        return true;
    }
};