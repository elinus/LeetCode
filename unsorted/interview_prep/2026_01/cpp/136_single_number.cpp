#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int sig_num{0};
    for (auto &&num : nums) {
      sig_num ^= num;
    }
    return sig_num;
  }
};