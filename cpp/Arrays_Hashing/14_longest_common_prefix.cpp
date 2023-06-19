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
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return {};
        string ans{};
        int min_str_len = INT_MAX;
        int n = strs.size();

        for (int i = 0; i < n; i++) {
            if (strs[i].length() < min_str_len) min_str_len = strs[i].length();
        }

        for (int i = 0; i < min_str_len; i++) {
            char key = strs[0][i];
            int flag = 1;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != key) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                ans += key;
            } else
                break;
        }

        return ans;
    }
};

int main(int argc, char const* argv[]) {
    vector<string> strs = {"flower", "flow", "flight"};
    vector<string> v1 = {"cir", "car"};
    Solution sol;
    cout << sol.longestCommonPrefix(strs) << endl;
    cout << sol.longestCommonPrefix(v1) << endl;
    return 0;
}
