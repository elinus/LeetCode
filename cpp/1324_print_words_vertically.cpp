#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<string> printVertically(string s) {

    vector<string> strs;
    int pos = 0;
    int k = 0;

    while (s[k] != '\0') {
      if (s[k] == ' ') {
        strs.push_back(s.substr(pos, k - pos));
        pos = k + 1;
      }
      k++;
    }
    strs.push_back(s.substr(pos, k - pos));

    int max_size_ = -1;
    int n = strs.size();
    for (int i = 0; i < n; i++) {
      int len = strs[i].length();
      if (len > max_size_) {
        max_size_ = len;
      }
    }

    vector<string> ans(max_size_, string(strs.size(), ' '));

    k = 0;
    for (int i = 0; i < max_size_; i++) {
      pos = 0;
      for (int j = 0; j < strs.size(); j++) {
        if (k < strs[j].size()) {
          ans[i][pos] = strs[j][k];
        }
        pos++;
      }
      k++;
    }

    for (int i = 0; i < max_size_; i++) {
      while (!ans[i].empty() && ans[i].back() == ' ') {
        ans[i].pop_back();
      }
    }

    return ans;
  }
};

int main(int argc, char const *argv[]) {
  string s1 = "HOW ARE YOU XYZQ QWERTY ZXS X ER";
  Solution sol;
  sol.printVertically(s1);
  return 0;
}
