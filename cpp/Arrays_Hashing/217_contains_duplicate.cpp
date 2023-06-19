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
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for (int i = 0; i < nums.size(); i++) {
            if (!us.insert(nums[i]).second) return true;
        }
        return false;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
