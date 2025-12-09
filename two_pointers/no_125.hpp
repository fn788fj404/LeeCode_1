/** A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
 * it reads the same forward and backward. Alphanumeric characters include letters and numbers.
 * Given a string s, return true if it is a palindrome, or false otherwise.
 */

#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        // 先剔除不是数字和英文的内容
        std::erase_if(s, [](char c)
                      { return !isalnum((unsigned char)c); });

        // 转小写
        for (char &c : s)
            c = std::tolower((unsigned char)c);

        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};