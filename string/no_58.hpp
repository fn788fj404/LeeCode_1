/**
 * Given a string s consisting of words and spaces, return the length of the last word in the string.
 * A word is a maximal substring consisting of non-space characters only
 */

#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.size() - 1;

        while (i >= 0 && s[i] == ' ')
            i--;

        int len = 0;

        while (i >= 0 && s[i] != ' ')
        {
            len++;
            i--;
        }

        return len;
    }
};