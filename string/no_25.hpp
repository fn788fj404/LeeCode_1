
/** Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. */

#include <string>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
            return 0;

        for (uint32_t i = 0; i < haystack.size(); ++i)
        {
            if (haystack.substr(i, needle.size()) == needle)
                return i;
        }

        return -1;
    }
};
