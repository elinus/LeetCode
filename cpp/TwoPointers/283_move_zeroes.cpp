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
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int cur = 0; cur < n; cur++) {
            if (nums[cur] != 0) {
                swap(nums[k++], nums[cur]);
            }
        }
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
