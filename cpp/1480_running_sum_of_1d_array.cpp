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
  vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
      nums[i] += nums[i - 1];
    }
    return nums;
  }
};

int main(int argc, char const* argv[]) {
  /* code */

  return 0;
}
