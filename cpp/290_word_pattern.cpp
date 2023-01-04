#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <iterator>
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
  bool wordPattern(string pattern, string s) {
    if (pattern.empty() || s.empty()) return false;

    stringstream ss(s);
    istream_iterator<string> beg(ss), end;
    vector<string> words(beg, end);
    if (pattern.size() != words.size()) return false;

    unordered_map<char, string> um;
    set<char> ps;
    set<string> ws;
    for (int i = 0; i < pattern.size(); i++) {
      ps.insert(pattern[i]);
      ws.insert(words[i]);
      if (um.find(pattern[i]) != um.end()) {
        if (um[pattern[i]] != words[i]) return false;
      } else {
        um[pattern[i]] = words[i];
      }
    }
    if (ps.size() != ws.size()) return false;
    return true;
  }
};

int main(int argc, char const *argv[]) {
  /* code */

  return 0;
}
