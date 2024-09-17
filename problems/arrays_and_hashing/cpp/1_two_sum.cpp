#include <unordered_map>
#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(n), where n is the size of the input vector.
 *   We iterate through the vector once, and hash map operations (insert, find)
 * are O(1) on average.
 * - Space: O(n), as we use an additional hash map to store up to n elements.
 */
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    // Edge case: if the input vector is empty, return an empty result
    if (nums.empty())
      return {};

    // Hash map to store the value and its corresponding index in the nums array
    unordered_map<int, int> value_to_index;

    // Iterate over the nums array
    for (int i = 0; i < nums.size(); ++i) {
      // Calculate the complement needed to reach the target
      int complement = target - nums[i];

      // If the complement exists in the hash map, we've found the solution
      if (value_to_index.find(complement) != value_to_index.end()) {
        return {value_to_index[complement],
                i}; // Return the indices of the two numbers
      }

      // Otherwise, store the current number and its index in the hash map
      value_to_index[nums[i]] = i;
    }

    // If no solution is found (though it's guaranteed one exists), return an
    // empty result
    return {};
  }
};
