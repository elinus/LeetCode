#include <algorithm>
#include <array>
#include <climits>
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
  int maxSubArray(vector<int>& nums) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++) {
      max_ending_here = max_ending_here + nums[i];
      if (max_so_far < max_ending_here) max_so_far = max_ending_here;

      if (max_ending_here < 0) max_ending_here = 0;
    }
    return max_so_far;
  }
};

int main(int argc, char const* argv[]) {
  /* code */

  return 0;
}
