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
    int lengthOfLastWord(string s) {
        if (s.empty()) return 0;
        int n = s.length() - 1;
        for (; n >= 0; --n) {
            if (isalpha(s[n])) break;
        }
        int length = 0;
        for (int j = n; j >= 0; j--) {
            if (s[j] == ' ') break;
            length++;
        }
        return length;
    }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
