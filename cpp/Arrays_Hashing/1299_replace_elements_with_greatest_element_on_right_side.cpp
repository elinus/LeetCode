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
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max_elem_on_right = arr[n - 1];
        int max_prev = -1;
        arr[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            max_prev = max_elem_on_right;
            if (arr[i] > max_elem_on_right) {
                max_elem_on_right = arr[i];
            }
            arr[i] = max_prev;
        }
        return arr;
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
