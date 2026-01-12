#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(n * m log m), where n is the number of strings, and m is the
 * maximum length of a string. Sorting each string takes O(m log m), and we do
 * it for all n strings.
 * - Space: O(n * m), where n is the number of strings and m is the average
 * length of strings. The space is used by the hash map and result vector.
 */
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> groups;

    for (auto &&word : strs) {
      string key(word);
      sort(key.begin(), key.end());
      groups[key].push_back(word);
    }

    vector<vector<string>> result;
    for (auto &bucket : groups) {
      result.push_back(move(bucket.second));
    }

    return result;
  }
};
