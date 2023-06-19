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
    int maxNumberOfBalloons(string text) {
        unordered_map<int, int> htable;
        int n = text.length();
        for (int i = 0; i < n; i++) {
            htable[text[i]]++;
        }
        return min(htable['b'],
                   min(htable['a'], min(htable['l'] / 2,
                                        min(htable['o'] / 2, htable['n']))));
    }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
