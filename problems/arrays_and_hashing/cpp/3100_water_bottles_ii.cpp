#include <iostream>

using namespace std;

// Time Complexity = O(N)
class Solution {
public:
  int maxBottlesDrunk(int numBottles, int numExchange) {
    int fullBottles{numBottles}, emptyBottles{0}, bottlesDrunk{0};
    while (fullBottles) {

      emptyBottles += fullBottles;
      bottlesDrunk += fullBottles;
      fullBottles = 0;
      if (numExchange <= emptyBottles) {
        ++fullBottles;
        emptyBottles -= numExchange;
        ++numExchange;
      }
    }
    return bottlesDrunk;
  }
};

int main(int argc, char const *argv[]) {
  Solution sol;
  cout << sol.maxBottlesDrunk(13, 6) << endl;
  cout << sol.maxBottlesDrunk(10, 3) << endl;
  return 0;
}
