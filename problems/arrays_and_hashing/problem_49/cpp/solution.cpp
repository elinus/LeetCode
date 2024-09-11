#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> result;
    if (strs.empty())
      return result;
    unordered_map<string, vector<string>> hmap;
    for (auto &&elem : strs) {
      string key(elem);
      sort(begin(key), end(key));
      hmap[key].push_back(elem);
    }
    for (auto it = begin(hmap); it != end(hmap); ++it) {
      result.push_back(it->second);
    }

    return result;
  }
};
