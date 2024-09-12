#include <algorithm>
#include <initializer_list>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    if (nums.empty())
      return {};
    unordered_map<int, int> hmap;
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (hmap.find(complement) != hmap.end()) {
        return {hmap[complement], i}; // found;
      }
      hmap[nums[i]] = i;
    }
    return {};
  }
};
