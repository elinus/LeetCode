#include <iostream>
#include <string>
#include <vector>

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
    // If the lengths of the strings are not the same, they cannot be anagrams
    if (s.length() != t.length()) {
      return false;
    }

    // Vector to count the frequency of each character (for lowercase English
    // letters)
    vector<int> char_count(26, 0);

    // Traverse both strings and update the character frequency
    for (int i = 0; i < s.length(); ++i) {
      char_count[s[i] - 'a']++; // Increment count for s
      char_count[t[i] - 'a']--; // Decrement count for t
    }

    // If all character frequencies are zero, the strings are anagrams
    for (int count : char_count) {
      if (count != 0) {
        return false; // Mismatch found
      }
    }

    // Strings are anagrams
    return true;
  }
};
