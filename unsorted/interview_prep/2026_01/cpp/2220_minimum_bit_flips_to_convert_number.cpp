#include <iostream>
using namespace std;

class Solution {
public:
  // Time Complexity: O(log(max(start, goal))) - number of bits in larger number
  // Space Complexity: O(1) - only uses constant extra space
  int minBitFlips(int start, int goal) {
    int xor_result = start ^ goal;
    int flips = 0;

    while (xor_result) {
      flips += xor_result & 1;
      xor_result >>= 1;
    }

    return flips;
  }
};

// Approach - 2026-01-15 ----- Working!
int minBitFlips(int start, int goal) {
  int shift_start{1}, shift_goal{1}, flip_bits{0};
  while (start || goal) {
    shift_start = shift_start & start;
    shift_goal = shift_goal & goal;
    if (shift_start != shift_goal)
      flip_bits++;
    start = start >> 1;
    goal = goal >> 1;
    shift_start = 1;
    shift_goal = 1;
  }
  return flip_bits;
}

int main() {
  int res1 = 10 & 1;
  cout << "res1 = " << res1 << endl;
  int res2 = 7;
  int res3 = 7 >> 1;
  cout << "res2 = " << res2 << ", res3 = " << res3 << endl;

  Solution sol;

  int start1{10}, goal1{7};
  cout << "flip bits = " << sol.minBitFlips(start1, goal1) << endl;

  int start2{3}, goal2{4};
  cout << "flip bits = " << sol.minBitFlips(start2, goal2) << endl;

  return 0;
}