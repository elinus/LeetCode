#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int candidate = nums[0], vote = 1;
    for (size_t i = 1; i < nums.size(); i++) {
      if (vote == 0) {
        candidate = nums[i];
        vote++;
      } else if (candidate != nums[i]) {
        vote--;
      } else {
        vote++;
      }
    }
    return candidate;
  }
};

// OR
// Time Complexity: O(n) - single pass through the array
// Space Complexity: O(1) - only uses two variables

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
      if (count == 0) {
        candidate = num;
      }
      count += (num == candidate) ? 1 : -1;
    }

    return candidate;
  }
};