#include "stdc++.h"
using namespace std;

class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        int ans{0};
        int n = nums.size();
        for (auto& elem : nums) ans ^= elem;
        return ans;
    }
};