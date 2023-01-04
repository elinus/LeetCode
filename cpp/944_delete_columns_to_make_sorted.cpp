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
  int minDeletionSize(vector<string>& strs) {
    if (strs.empty()) return 0;
    int r = strs.size();
    int c = strs[0].size();
    int result = 0;
    for (int i = 0; i < c; i++) {
      for (int j = 1; j < r; j++) {
        if (strs[j][i] < strs[j - 1][i]) {
          result++;
          break;
        }
      }
    }
    return result;
  }
};

int main(int argc, char const* argv[]) {
  /* code */

  return 0;
}
