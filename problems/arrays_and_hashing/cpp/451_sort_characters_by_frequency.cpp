#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(n log n), where n is the length of the string. This is
 * due to the sorting step, while counting frequencies takes O(n) time.
 * - Space: O(n), where n is the number of unique characters in the
 * string. This is due to storing frequencies and the sorted character list.
 */
class Solution {
public:
  string frequencySort(const string &s) {
    // Map to store frequency of each character
    unordered_map<char, int> freq_map;

    // Count frequency of each character in the string
    for (char ch : s) {
      freq_map[ch]++;
    }

    // Create a vector of pairs to store characters and their frequencies
    vector<pair<int, char>> vec_pair;
    vec_pair.reserve(freq_map.size()); // Reserve space to avoid reallocations

    // Populate the vector with frequency and character pairs
    for (const auto &entry : freq_map) {
      vec_pair.emplace_back(entry.second, entry.first);
    }

    // Sort the vector in descending order based on frequency
    sort(vec_pair.begin(), vec_pair.end(),
         [](const pair<int, char> &p1, const pair<int, char> &p2) {
           return p1.first > p2.first;
         });

    // Construct the resulting string based on sorted frequencies
    string result;
    for (const auto &entry : vec_pair) {
      result.append(entry.first, entry.second);
    }

    return result;
  }
};
