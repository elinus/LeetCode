#include <iostream>

class Solution {
public:
  int numWaterBottles(int numBottles, int numExchange) {
    int ans{0}, extraBottles{0};
    while (numBottles > 0) {
      ans += numBottles;
      numBottles += extraBottles;
      extraBottles = numBottles % numExchange;
      numBottles = numBottles / numExchange;
    }
    return ans;
  }
};

int main() {
  Solution sol;
  std::cout << sol.numWaterBottles(9, 3) << std::endl;
  std::cout << sol.numWaterBottles(15, 4) << std::endl;
  std::cout << sol.numWaterBottles(9, 10) << std::endl;
  std::cout << sol.numWaterBottles(9, 1) << std::endl;
  return 0;
}
