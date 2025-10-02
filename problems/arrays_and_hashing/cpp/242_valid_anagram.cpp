#include <algorithm>
#include <array>
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Determines if two strings are anagrams of each other.
 * @complexity
 * - Time: O(n), where n is the length of the input strings. We
 * iterate through both strings once.
 * - Space: O(1), as the vector used for frequency counting is fixed
 * in size (26 elements for English lowercase letters).
 */
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length())
      return false;
    array<int, 26> freq{};

    for (int i = 0; i < s.length(); ++i) {
      freq[s[i] - 'a']++; // Increment count for s
      freq[t[i] - 'a']--; // Decrement count for t
    }

    return all_of(freq.begin(), freq.end(), [](int c) { return c == 0; });
  }
};
