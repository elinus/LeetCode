#include "stdc++.h"
using namespace std;

class Solution {
    int bits(uint32_t n) {
        int count = 0;
        while (n) {
            count++;
            n = n & (n - 1);
        }
        return count;
    }

   public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            ans[i] = bits(i);
        }
        return ans;
    }
};