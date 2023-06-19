#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
   public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ht1, ht2;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            ht1[s[i]] = t[i];
            ht2[t[i]] = s[i];
        }
        if (ht1.size() != ht2.size()) return false;
        for (int i = 0; i < n; i++) {
            if (ht1[s[i]] != t[i] || ht2[t[i]] != s[i]) return false;
        }

        return true;
        // From NeetCode.io
        // unordered_map<char, vector<int>> m1;
        // unordered_map<char, vector<int>> m2;
        // for (int i = 0; i < s.length(); i++) {
        //     m1[s[i]].push_back(i);
        //     m2[t[i]].push_back(i);

        //     if (m1[s[i]] != m2[t[i]]) return false;
        // }
        // return true;
    }
};

int main(int argc, char const *argv[]) {
    string s = "papap";
    string t = "titii";
    Solution sol;
    cout << sol.isIsomorphic(s, t) << endl;
    return 0;
}
