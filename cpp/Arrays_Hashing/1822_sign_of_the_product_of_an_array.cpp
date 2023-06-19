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
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int neg = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) return 0;
            if (nums[i] < 0) neg++;
        }
        return neg % 2 ? -1 : 1;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
