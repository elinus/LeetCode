#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

class Solution {
   public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, prev = 0;
        int right = accumulate(begin(nums), end(nums), 0);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            left += nums[i];
            right -= prev;
            if (left == right) return i;
            prev = nums[i];
        }
        return -1;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
