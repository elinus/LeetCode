#include <vector>

using namespace std;

/**
 * @complexity
 * - Time(construction): O(n), where n is the size of the input array.
 *   We compute the prefix sum in one pass through the array.
 * - Time(sumRange): O(1), as we use precomputed prefix sums to get the result.
 * - Space: O(n), because we store the prefix sums for all elements of the
 * array.
 */
class NumArray {
  vector<int> prefix_sum_vec; // Stores prefix sums of the input array

public:
  NumArray(vector<int> &nums) {
    // Initialize the prefix sum vector with the same size as nums
    prefix_sum_vec = vector<int>(nums.size(), 0);

    // Compute the prefix sum array
    if (!nums.empty()) {
      prefix_sum_vec[0] = nums[0]; // First element is the same as nums[0]
      for (int i = 1; i < nums.size(); ++i) {
        prefix_sum_vec[i] = prefix_sum_vec[i - 1] + nums[i];
      }
    }
  }

  int sumRange(int left, int right) {
    // If left is 0, return the prefix sum up to the right index
    if (left == 0) {
      return prefix_sum_vec[right];
    }

    // Otherwise, subtract the prefix sum up to left-1 from the prefix sum up to
    // right
    return prefix_sum_vec[right] - prefix_sum_vec[left - 1];
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */