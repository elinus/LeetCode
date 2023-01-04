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
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    vector<int> ht(26, 0);
    for (int i = 0; i < s.size(); i++) ht[s[i] - 'a']++;
    for (int i = 0; i < t.size(); i++) ht[t[i] - 'a']--;
    for (int i = 0; i < 26; i++) {
      if (ht[i] != 0) return false;
    }
    return true;
  }
};

int main(int argc, char const *argv[]) {
  /* code */

  return 0;
}
