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
    int strStr(string haystack, string needle) {
        // size_t pos = haystack.find(needle);
        // if (pos != string::npos) return pos;
        // return -1;
        if (haystack.size() < needle.size()) return -1;
        int found = 0;
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++) {
            if (haystack[i] == needle[0]) {
                found = 1;
                for (int j = 1; j < needle.size(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        found = 0;
                        break;
                    }
                }
                if (found == 1) return i;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
