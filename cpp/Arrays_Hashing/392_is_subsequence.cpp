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
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length()) return false;
        int slen = s.length();
        int k = 0;
        for (int i = 0; i < t.length() && k < slen; ++i) {
            if (t[i] == s[k]) {
                k++;
            }
        }
        return k == slen;
    }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
