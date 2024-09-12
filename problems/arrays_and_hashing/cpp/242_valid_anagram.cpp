#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        vector<int> vec(26, 0);
        for (int i = 0; i < s.length(); ++i)
        {
            vec[s[i] - 'a']++;
            vec[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (vec[i] != 0)
                return false;
        }
        return true;
    }
};