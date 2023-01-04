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
  bool detectCapitalUse(string word) {
    if (word.empty()) return false;
    int cap = 0, low = 0;
    for (int i = 0; i < word.size(); i++) {
      if (word[i] >= 'A' && word[i] <= 'Z')
        cap++;
      else
        low++;
    }
    int n = word.size();
    if (cap == n || low == n) return true;
    if (word[0] >= 'A' && word[0] <= 'Z' && low == n - 1) return true;
    return false;
  }
};

int main(int argc, char const *argv[]) {
  /* code */

  return 0;
}
