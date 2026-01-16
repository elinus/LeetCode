class Solution {
public:
  // Time Complexity: O(1) - pure arithmetic, no loops
  // Space Complexity: O(1) - only uses constant extra space
  int totalMoney(int n) {
    int weeks{n / 7}, days{n % 7};
    int complete_weeks = (weeks * 28) + 7 * weeks * (weeks - 1) / 2;
    int partial_week = days * (weeks + 1) + days * (days - 1) / 2;
    return complete_weeks + partial_week;
  }
};