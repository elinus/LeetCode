#include <array>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  vector<string> commonChars(vector<string> &words) {
    array<int, 26> freq{};

    for (char &ch : words[0])
      freq[ch - 'a']++;

    for (int i = 1; i < words.size(); ++i) {
      array<int, 26> curr{};
      for (char &ch : words[i])
        curr[ch - 'a']++;
      for (int j = 0; j < 26; ++j) {
        freq[j] = min(freq[j], curr[j]);
      }
    }

    vector<string> ans;
    for (int i = 0; i < 26; i++) {
      while (freq[i]--) {
        char ch = static_cast<char>('a' + i);
        ans.push_back({ch});
      }
    }
    return ans;
  }
};

int main() {
  Solution sol;
  vector<string> vec{"bella", "label", "roller"};
  sol.commonChars(vec);
  return 0;
}
