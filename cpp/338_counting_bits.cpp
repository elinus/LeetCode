#include <iostream>
#include <vector>

using namespace std;

class Solution {
  int count_bits_utils(int n) {
    int count = 0;
    while (n) {
         if (n & 1)
           count++;
         n >>= 1;
    }
    return count;
  }

public:
  vector<int> countBits(int n) {
    vector<int> ans(n + 1, 0);
    for (int i = 0; i <= n; i++) {
      ans[i] = count_bits_utils(i);
    }
    return ans;
  }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    sol.countBits(2);
    sol.countBits(5);
    return 0;
}
