#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> m_s;
        unordered_map<char, char> m_t;

        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            char b = t[i];

            if (m_s.count(a) && m_s[a] != b)
                return false;

            if (m_t.count(b) && m_t[b] != a)
                return false;

            m_s[a] = b;
            m_t[b] = a;
        }

        return true;
    }
};