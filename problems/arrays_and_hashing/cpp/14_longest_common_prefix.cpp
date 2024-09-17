#include <algorithm> // For std::min
#include <string>
#include <vector>
/*
 * Time: O(n * L).
 * Space: O(1) additional space (besides the result), as the
 * substring operation only returns a reference to the original string.
 */
class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs) {
    // If the input array is empty, return an empty string
    if (strs.empty())
      return "";

    // Step 1: Find the length of the shortest string in the array
    int minLength =
        strs[0].length(); // Initialize with the length of the first string
    for (const auto &str : strs) {
      // Update minLength to the length of the shortest string encountered
      minLength = std::min(minLength, static_cast<int>(str.length()));
    }

    // Step 2: Initialize a counter to track the index for comparison
    int counter = 0;

    // Step 3: Compare characters at each position up to the length of the
    // shortest string
    while (counter < minLength) {
      char ch = strs[0][counter]; // Take the character from the first string as
                                  // a reference

      // Step 4: Compare the character from the first string with all other
      // strings
      for (int i = 1; i < strs.size(); ++i) {
        // If any string differs at this position, return the common prefix so
        // far
        if (strs[i][counter] != ch) {
          return strs[0].substr(0, counter);
        }
      }

      // Step 5: If all strings match at this position, move to the next
      // character
      ++counter;
    }

    // Step 6: If we complete the loop without mismatches, return the entire
    // common prefix
    return strs[0].substr(0, counter);
  }
};
