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
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        if (!n) return true;
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        int fb_size = flowerbed.size();
        for (int i = 1; i < fb_size - 1; i++) {
            if (!flowerbed[i - 1] && !flowerbed[i] && !flowerbed[i + 1]) {
                flowerbed[i] = 1;
                n--;
            }
            if (n == 0) return true;
        }

        return false;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> flowerbed1 = {1, 0, 0, 0, 1};
    int n1 = 1;
    Solution sol;
    cout << sol.canPlaceFlowers(flowerbed1, n1) << endl;
    cout << sol.canPlaceFlowers(flowerbed1, 2) << endl;
    vector<int> flowerbed2 = {0, 0, 1, 0, 0};
    cout << sol.canPlaceFlowers(flowerbed2, 1) << endl;
    return 0;
}
