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

class MyHashSet {
    vector<bool> htable;

   public:
    MyHashSet() { htable = vector<bool>(1000001, false); }

    void add(int key) { htable[key] = true; }

    void remove(int key) { htable[key] = false; }

    bool contains(int key) { return htable[key]; }
};

int main(int argc, char const *argv[]) {
    /* code */

    return 0;
}
