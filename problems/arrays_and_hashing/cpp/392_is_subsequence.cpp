#include <string>

class Solution {
public:
  /**

   * @complexity
   * - Time: O(n + m), where n is the length of s and m is the length
   * of t. We scan both strings once, making the algorithm linear in time.
   * - Space: O(1), as no additional space is used other than a few
   * integer variables.
   */
  bool isSubsequence(const std::string &s, const std::string &t) {
    // If s is an empty string, it is a subsequence of any string
    if (s.empty())
      return true;

    // If s is longer than t, s cannot be a subsequence
    if (s.length() > t.length())
      return false;

    // Two-pointer technique: one pointer for each string
    int sIndex = 0, tIndex = 0;

    // Traverse the strings
    while (tIndex < t.length()) {
      // If characters match, move to the next character in s
      if (s[sIndex] == t[tIndex]) {
        ++sIndex;
        // If we've matched all characters in s, return true
        if (sIndex == s.length())
          return true;
      }
      // Always move to the next character in t
      ++tIndex;
    }

    // If we've exhausted t and haven't matched all characters of s, return
    // false
    return false;
  }
};

int main() {
  Solution sol;
  std::string s{"abc"}, t{"ahbgdc"};
  sol.isSubsequence(s, t);
  return 0;
}