#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <limits>
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
  string destCity(vector<vector<string>> &paths) {
    unordered_set<string> starts;
    for (auto &p : paths) {
      starts.insert(p[0]);
    }

    for (auto &p : paths) {
      if (!starts.count(p[1]))
        return p[1];
    }

    // Using unordered_map, not a good idea as outDegree of all paths are not
    // needed, so not point of storing it

    // unordered_map<string, uint32_t> outDegree;
    // for (int i = 0; i < paths.size(); ++i) {
    //   outDegree[paths[i][0]]++;
    //   if (outDegree.find(paths[i][1]) == outDegree.end()) {
    //     outDegree[paths[i][1]] = 0;
    //   }
    // }

    // for (auto it = outDegree.begin(); it != outDegree.end(); ++it) {
    //   if (it->second == 0)
    //     return it->first;
    // }

    return {};
  }
};

int main(int argc, char const *argv[]) {

  /* code */

  return 0;
}
