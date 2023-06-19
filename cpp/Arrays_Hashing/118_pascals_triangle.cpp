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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            vector<int> v(i, 1);
            ans.push_back(v);
        }
        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < ans[i].size() - 1; j++) {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        return ans;
    }
};

// NeetCode.io soln
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows)
//     {
//         vector<vector<int>> ret;
//         for(int i = 0; i < numRows ; i++){
//             vector<int> row(i+1, 1);
//             for(int j = 1; j < i ; j++){
//                 row[j] = ret[i-1][j] + ret[i-1][j-1];
//             }
//             ret.push_back(row);
//         }
//         return ret;
//     }
// };

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
