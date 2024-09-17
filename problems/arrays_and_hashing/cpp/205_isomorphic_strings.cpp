#include <string>
#include <unordered_map>

/**
 * @complexity
 * - Time: O(n), where n is the length of the strings. We make a
 * single pass through the strings while performing constant-time operations.
 * - Space: O(n), due to the hash maps storing the character
 * mappings.
 */
class Solution {
public:
  bool isIsomorphic(const std::string &s, const std::string &t) {
    // If the strings have different lengths, they cannot be isomorphic
    if (s.length() != t.length())
      return false;

    // Hash maps to track character mappings from s -> t and t -> s
    std::unordered_map<char, char> map_s_to_t;
    std::unordered_map<char, char> map_t_to_s;

    // Iterate through both strings
    for (int i = 0; i < s.length(); ++i) {
      char s_char = s[i];
      char t_char = t[i];

      // Check if there's already a mapping from s_char to t_char
      if (map_s_to_t.find(s_char) != map_s_to_t.end()) {
        // If there's a mismatch in the mapping, return false
        if (map_s_to_t[s_char] != t_char)
          return false;
      } else {
        // Add the mapping from s_char to t_char
        map_s_to_t[s_char] = t_char;
      }

      // Check if there's already a reverse mapping from t_char to s_char
      if (map_t_to_s.find(t_char) != map_t_to_s.end()) {
        // If there's a mismatch in the reverse mapping, return false
        if (map_t_to_s[t_char] != s_char)
          return false;
      } else {
        // Add the reverse mapping from t_char to s_char
        map_t_to_s[t_char] = s_char;
      }
    }

    // If no mismatches are found, the strings are isomorphic
    return true;
  }
};
