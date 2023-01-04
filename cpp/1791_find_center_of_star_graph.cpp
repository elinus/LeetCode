#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int findCenter(vector<vector<int>> &edges) {
    int n = edges.size();
    vector<int> v(n + 1, 0);
    int min_ = INT_MIN, index = -1;
    for (int i = 0; i < n; i++) {
      v[edges[i][0] - 1]++, v[edges[i][1] - 1]++;
    }
    for (long i = 0; i <= n; i++) {
      if (v[i] > min_) {
        min_ = v[i];
        index = i;
      }
    }
    return index + 1;
  }
};

int main(int argc, char const *argv[]) {
  //
  return 0;
}
