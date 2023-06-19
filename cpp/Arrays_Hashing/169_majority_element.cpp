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
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ht;
        int n = nums.size();
        for (int& elem : nums) {
            if (++ht[elem] > n / 2) return elem;
        }
        return -1;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
