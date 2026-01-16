class Solution {
public:
  // Time Complexity: O(d) - where d is the number of digits in n
  // Space Complexity: O(1) - only uses constant extra space
  int subtractProductAndSum(int n) {
    int product{1}, sum{0};
    while (n) {
      int digit = n % 10;
      sum += digit;
      product *= digit;
      n /= 10;
    }
    return product - sum;
  }
};