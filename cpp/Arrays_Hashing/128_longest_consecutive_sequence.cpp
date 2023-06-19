#include "stdc++.h"
using namespace std;

class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int count = 1, max_count = 1;
        int prev = INT_MIN, curr = INT_MIN;
        set<int> st;
        for (auto& elem : nums) st.insert(elem);
        for (auto& elem : st) {
            prev = curr;
            curr = elem;
            if (curr == (prev + 1)) {
                count++;
                if (count > max_count) max_count = count;
            } else
                count = 1;
        }
        return max_count;
    }
};