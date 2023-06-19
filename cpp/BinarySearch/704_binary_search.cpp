#include "stdc++.h"
using namespace std;

class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n - 1;
        low = 0;
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
        }

        return -1;
    }
};