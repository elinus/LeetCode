#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  // Time Complexity: O(n) - single pass with two pointers
  // Space Complexity: O(n) - for the result array

  vector<int> sortedSquares(vector<int> &nums) {
    int n = nums.size();
    vector<int> result(n, 0);
    int left{0}, right{n - 1};
    for (int i = n - 1; i >= 0; --i) {
      int left_sq = nums[left] * nums[left];
      int right_sq = nums[right] * nums[right];
      if (left_sq > right_sq) {
        result[i] = left_sq;
        left++;
      } else {
        result[i] = right_sq;
        right--;
      }
    }

    return result;
  }
};

// Time Complexity: O(n log n) - dominated by sorting
// Space Complexity: O(1) or O(n) - depending on sort implementation

vector<int> sortedSquares(vector<int> &nums) {
  for (int &num : nums) {
    num = num * num;
  }
  sort(nums.begin(), nums.end());
  return nums;
}