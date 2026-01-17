#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Time Complexity: O(n + m) - where n = word1.length(), m = word2.length()
// Space Complexity: O(n + m) - for the result string

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int n1 = word1.length();
    int n2 = word2.length();
    string result;
    result.reserve(n1 + n2); // Pre-allocate space

    int i = 0;
    int j = 0;

    while (i < n1 || j < n2) {
      if (i < n1) {
        result += word1[i++];
      }
      if (j < n2) {
        result += word2[j++];
      }
    }

    return result;
  }
};

int main() {
  string word1 = "abc", word2 = "pqr";
  Solution sol;
  sol.mergeAlternately(word1, word2);
}