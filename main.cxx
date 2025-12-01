#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map; // 值、下标

        for (int i = 0; i < nums.size(); ++i)
        {
            auto it_pair = target - nums[i];

            if (map.count(it_pair))
            {
                return {i, map[it_pair]};
            }

            map[nums[i]] = i;
        }
    }
};

int main()
{
    return 0;
}