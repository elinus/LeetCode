#include <iostream>

using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int max_count{0}, curr_count{0};
    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i])
        curr_count++;
      else
        curr_count = 0;

      max_count = max(max_count, curr_count);
    }
    return max_count;
  }
};
