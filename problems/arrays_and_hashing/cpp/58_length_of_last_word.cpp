#include <string>

class Solution {
public:
  /**
   * @complexity
   * - Time: O(n), where n is the length of the input string.
   *   We make a single pass over the string to skip trailing spaces and count
   *   the length of the last word.
   * - Space: O(1). The function uses a constant amount of extra
   * space.
   */
  int lengthOfLastWord(const std::string &s) {
    int n = s.length();
    int word_len = 0;

    int i = n - 1;
    while (i >= 0 && s[i] == ' ') {
      --i;
    }

    while (i >= 0 && s[i] != ' ') {
      ++word_len;
      --i;
    }

    return word_len;
  }
};
