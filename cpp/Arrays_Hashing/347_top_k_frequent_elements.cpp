#include "stdc++.h"

using namespace std;

class Solution {
    static bool sort_by_val(const pair<int, int> &a, const pair<int, int> &b) {
        return (a.second > b.second);
    }

   public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> vec;
        for (const auto &elem : mp) {
            vec.push_back({elem.first, elem.second});
        }
        sort(vec.begin(), vec.end(), sort_by_val);
        vector<int> topk;
        for (int i = 0; i < k; i++) {
            topk.push_back(vec[i].first);
        }
        return topk;
    }
};