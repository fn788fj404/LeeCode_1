/**
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 */

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        // 找最短字符串长度
        int minLen = strs[0].size();
        for (auto &s : strs)
            minLen = min(minLen, static_cast<int>(s.size()));

        for (int i = 0; i < minLen; ++i)
        {
            char c = strs[0][i];
            for (auto &s : strs)
            {
                if (s[i] != c)
                    return strs[0].substr(0, i); // 一旦不匹配就返回
            }
        }

        // 如果所有字符都匹配，返回最短字符串
        return strs[0].substr(0, minLen);
    }
};