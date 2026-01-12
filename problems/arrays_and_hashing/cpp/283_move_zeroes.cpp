#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(n) - single pass through the array
// Space Complexity: O(1) - only uses two pointers, no extra space
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int left = 0; // pointer to place next non-zero element

    for (int right = 0; right < nums.size(); ++right) {
      if (nums[right] != 0) {
        swap(nums[left++], nums[right]);
      }
    }
  }
};
