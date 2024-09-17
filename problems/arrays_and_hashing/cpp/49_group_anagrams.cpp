#include <algorithm>
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
    // Result vector to store the grouped anagrams
    vector<vector<string>> result;

    // Return early if the input is empty
    if (strs.empty())
      return result;

    // Hash map to store the sorted string as key and corresponding anagrams as
    // values
    unordered_map<string, vector<string>> anagram_map;

    // Process each string in the input
    for (const auto &str : strs) {
      string sorted_str = str;                    // Copy the original string
      sort(sorted_str.begin(), sorted_str.end()); // Sort to use as the key

      // Group the anagram by inserting into the hash map
      anagram_map[sorted_str].push_back(str);
    }

    // Transfer grouped anagrams from the map to the result vector
    for (const auto &pair : anagram_map) {
      result.push_back(
          pair.second); // Each value in the map is a group of anagrams
    }

    return result;
  }
};
