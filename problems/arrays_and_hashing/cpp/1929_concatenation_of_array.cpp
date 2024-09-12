#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> getConcatenation(vector<int> &nums) {
    if (nums.empty())
      return {};
    vector<int> result(2 * nums.size());
    int n = nums.size();

    for (int i = 0; i < n; i++) {
      result[i + n] = result[i] = nums[i];
    }

    return result;
  }
};