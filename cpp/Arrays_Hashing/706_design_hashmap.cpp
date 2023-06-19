#include "stdc++.h"
using namespace std;

class MyHashMap {
    vector<pair<bool, pair<int, int>>> htable;

   public:
    MyHashMap() { htable = vector<pair<bool, pair<int, int>>>(1000001); }

    void put(int key, int value) {
        htable[key].first = true;
        htable[key].second = {key, value};
    }

    int get(int key) {
        if (!htable[key].first) return -1;
        return htable[key].second.second;
    }

    void remove(int key) { htable[key].first = false; }
};