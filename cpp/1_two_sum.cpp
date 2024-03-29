#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> um;
    for (int i = 0; i < nums.size(); i++) {
      int diff = target - nums[i];
      if (um.find(diff) != um.end()) {
        return {um[diff], i};
      }
      um[nums[i]] = i;
    }
    return {};
  }
};

int main(int argc, char const* argv[]) {
  /* code */

  return 0;
}
