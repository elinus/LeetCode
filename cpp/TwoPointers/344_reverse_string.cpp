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
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};

int main(int argc, char const* argv[]) {
    /* code */

    return 0;
}
