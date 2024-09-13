#include <string>

class Solution {
public:
  /**
   * @complexity
   * - Time Complexity: O(n), where n is the length of the input string.
   *   We make a single pass over the string to skip trailing spaces and count
   *   the length of the last word.
   * - Space Complexity: O(1). The function uses a constant amount of extra
   * space.
   */
  int lengthOfLastWord(const std::string &s) {
    int n = s.length();       // Get the length of the string
    int lengthOfLastWord = 0; // To store the length of the last word

    // Step 1: Skip trailing spaces by moving backward
    int i = n - 1;
    while (i >= 0 && s[i] == ' ') {
      --i;
    }

    // Step 2: Count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
      ++lengthOfLastWord;
      --i;
    }

    // Step 3: Return the length of the last word found
    return lengthOfLastWord;
  }
};
