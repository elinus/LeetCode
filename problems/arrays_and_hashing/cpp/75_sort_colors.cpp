#include <algorithm> // For std::swap
#include <vector>

using namespace std;

/**

 * @complexity
 * - Time: O(n), where n is the number of elements in the array. The
 * function makes one pass through the array.
 * - Space: O(1), since the sorting is done in place with no extra
 * memory.
 */
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int n = nums.size();

    // Pointers for tracking positions of 0s and 2s
    int zero_idx = 0;    // Tracks the position for 0s
    int two_idx = n - 1; // Tracks the position for 2s
    int i = 0;

    // Traverse the array and sort 0s, 1s, and 2s in place
    while (i <= two_idx) {
      if (nums[i] == 0) {
        // Swap current element with the next available position for 0
        swap(nums[i], nums[zero_idx]);
        ++zero_idx;
        ++i;
      } else if (nums[i] == 2) {
        // Swap current element with the next available position for 2
        swap(nums[i], nums[two_idx]);
        --two_idx;
      } else {
        // Move to the next element if it's 1
        ++i;
      }
    }
  }
};
