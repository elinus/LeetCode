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
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> htable;
        for (int i = 0; i < n2; i++) {
            htable[nums2[i]] = i;
        }
        vector<int> ans(n1, -1);
        for (int i = 0; i < n1; i++) {
            for (int j = htable[nums1[i]]; j < n2; j++) {
                if (nums2[j] > nums1[i]) {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }

        return ans;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
