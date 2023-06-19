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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]);
            nums[index - 1] = -1 * abs(nums[index - 1]);
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) ans.push_back(i + 1);
        }

        return ans;
    }
};
//[4,3,2,7,8,2,3,1]
//[-4,-3,-2,-7,8,2,-3,-1]

int main(int argc, char const* argv[]) {
    vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};
    Solution sol;
    sol.findDisappearedNumbers(v);
    return 0;
}
