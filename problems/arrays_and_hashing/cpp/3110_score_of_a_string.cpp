#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  int scoreOfString(string s) {
    int score{0};
    int n = s.length() - 1;
    for (int i = 0; i < n; ++i) {
      score += abs(s[i] - s[i + 1]);
    }
    return score;
  }
};

int main() {
  Solution sol;
  cout << "hello = " << sol.scoreOfString("hello") << endl;
  cout << "zaz = " << sol.scoreOfString("zaz") << endl;
  return 0;
}
