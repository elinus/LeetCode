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
#include <utility>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(begin(nums1), end(nums1));
        unordered_set<int> s2(begin(nums2), end(nums2));
        vector<int> v1, v2;
        for (auto& elem : s1) {
            if (s2.find(elem) == s2.end()) {
                v1.push_back(elem);
            }
        }
        for (auto& elem : s2) {
            if (s1.find(elem) == s1.end()) {
                v2.push_back(elem);
            }
        }

        return {v1, v2};
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
