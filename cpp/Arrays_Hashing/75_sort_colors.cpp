#include "stdc++.h"

using namespace std;

class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int ze = 0, tw = nums.size() - 1;
        while (ze < tw) {
            while (nums[ze] != 0) ze++;
            while (nums[tw] != 2) tw--;
            swap(nums[ze++], nums[tw--]);
        }
    }
};
