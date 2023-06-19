#include "stdc++.h"
using namespace std;

class Solution {
    int first(int n) {
        while (n >= 10) n /= 10;
        return n;
    }
    int last(int n) { return n % 10; }

   public:
    string largestNumber(vector<int>& nums) {
        if (nums.empty()) return {};
        map<int, map<int, int>> mm;
        for (auto& elem : nums) {
            int f = first(elem);
            int l = last(elem);
            mm[f][l] = elem;
        }
        string ans{};
        for (auto it1 = mm.rbegin(); it1 != mm.rend(); it1++) {
            for (auto it2 = it1->second.rbegin(); it2 != it1->second.rend();
                 ++it2) {
                ans += to_string(it2->second);
            }
        }
        return ans;
    }
};

int main(int argc, char const* argv[]) {
    Solution sol;
    vector<int> nums1 = {10, 2};
    cout << sol.largestNumber(nums1) << endl;
    vector<int> nums2 = {3, 30, 34, 5, 9};
    cout << sol.largestNumber(nums2) << endl;
    return 0;
}
