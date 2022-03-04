#include <iostream>
#include <vector>

using namespace std;

class Solution {
  int manhattan_distance(int x1, int x2, int y1, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
  }

public:
  int nearestValidPoint(int x, int y, vector<vector<int>> &points) {
    int ans = -1;
    int min_dist = INT_MAX;
    for (int i = 0; i < points.size(); i++) {
      if (points[i][0] == x || points[i][1] == y) {
        int dist = manhattan_distance(x, points[i][0], y, points[i][1]);
        if (dist < min_dist) {
          min_dist = dist;
          ans = i;
        }
      }
    }

    return ans;
  }
};