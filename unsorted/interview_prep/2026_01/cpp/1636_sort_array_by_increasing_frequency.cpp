#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  // Time Complexity: O(n log n) - dominated by sorting
  // Space Complexity: O(n) - for hash map and result array
  vector<int> frequencySort(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
      freq[num]++;
    }

    sort(nums.begin(), nums.end(), [&freq](int a, int b) {
      if (freq[a] == freq[b]) {
        return a > b; // Same frequency: decreasing order by value
      }
      return freq[a] < freq[b]; // Different frequency: increasing order
    });

    return nums;
  }
};

// Build map (n) + Sort k pairs (k log k) + Reconstruct (n)
// Time Complexity: O(n + k log k) where k = unique elements
// Space Complexity: O(k) for frequency map and pairs vector
vector<int> frequencySort(vector<int> &nums) {
  unordered_map<int, int> freq;
  for (int num : nums) {
    freq[num]++;
  }

  vector<pair<int, int>> pairs;
  pairs.reserve(freq.size());
  for (const auto &[num, count] : freq) {
    pairs.push_back({num, count});
  }

  sort(pairs.begin(), pairs.end(),
       [](const pair<int, int> &a, const pair<int, int> &b) {
         if (a.second != b.second) {
           return a.second < b.second; // Ascending frequency
         }
         return a.first > b.first; // Descending value
       });

  vector<int> result;
  result.reserve(nums.size());
  for (const auto &[num, count] : pairs) {
    for (int i = 0; i < count; i++) {
      result.push_back(num);
    }
  }

  return result;
}

int main() { return 0; }