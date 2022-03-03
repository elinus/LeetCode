#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> um;
    for (int i = 0; i < nums.size(); i++) {
      int n = target - nums[i];
      if (um.find(n) != um.end()) {
        return {um[n], i};
      } else {
        um[nums[i]] = i;
      }
    }

    return {};
  }
};

int main(int argc, char const *argv[]) {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  Solution sol;
  sol.twoSum(nums, target);
  return 0;
}
