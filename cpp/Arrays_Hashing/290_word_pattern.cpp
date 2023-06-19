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
    bool wordPattern(string pattern, string s) {
        if (pattern.empty() || s.empty()) return false;

        // istringstream ss(s);
        // istream_iterator<string> beg(ss), end;
        // vector<string> words(beg, end);
        // if (pattern.size() != words.size()) return false;
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(s);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i]] != w2i[word]) return false;
            p2i[pattern[i]] = w2i[word] = i + 1;
        }
        return i == n;
    }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
