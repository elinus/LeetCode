#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int slen = s.length();
        int plen = p.length();
        if (plen > slen) return ans;
        sort(begin(p), end(p));
        for (int i = 0; i < slen - plen + 1; i++) {
            string ss = s.substr(i, plen);
            sort(begin(ss), end(ss));
            if (p == ss) ans.push_back(i);
        }
        return ans;
    }
};

int main(int argc, char const *argv[]) {
    string s1 = "cbaebabacd", p1 = "abc";
    Solution sol;
    cout << s1 << endl;
    auto ans1 = sol.findAnagrams(s1, p1);
    string s2 = "abab", p2 = "ab";
    auto ans2 = sol.findAnagrams(s2, p2);
    return 0;
}
