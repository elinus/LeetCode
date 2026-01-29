#include <vector>
using namespace std;

class Solution {
  //   bool check_cons1(int n) {
  //     int prev{0}, curr{0};
  //     do {
  //       curr = n & 1;
  //       if (prev == 1 && prev == curr)
  //         return true;
  //       prev = curr;
  //       n >>= 1;
  //     } while (n);
  //     return false;
  //   }

public:
  //   int findIntegers(int n) {
  //     int result{0};
  //     for (int i = 0; i <= n; i++) {
  //       if (!check_cons1(i))
  //         result++;
  //     }
  //     return result;
  //   }

  int findIntegers(int n) {
    vector<int> fib(32);
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 32; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    int result{0}, prev_bit{0};
    for (int i = 30; i >= 0; i--) {
      if ((n >> i) & 1) {
        result += fib[i];
        if (prev_bit == 1)
          return result;
        prev_bit = 1;
      } else {
        prev_bit = 0;
      }
    }

    return result + 1;
  }
};