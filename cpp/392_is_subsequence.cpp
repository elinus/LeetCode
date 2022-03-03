#include <iostream>
#include <string>

using namespace std;

class Solution {

public:
  bool isSubsequence(string s, string t) {
    int k = 0;
    for (int i = 0; i < t.length(); i++) {
      if (t[i] == s[k]) {
        k++;
      }
    }
    return k == s.length();
  }
};

int main(int argc, char const *argv[]) {
  string s = "abc", t = "ahbgdc";
  Solution sol;
  sol.isSubsequence(s, t);
  return 0;
}
