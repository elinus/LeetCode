#include <iostream>
#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(n), where n is the size of the input vector. We iterate
 * over the vector once to fill the result.
 * - Space: O(n), where n is the size of the input vector. We
 * allocate additional space for the concatenated result.
 */
class Solution {
public:
  vector<int> get_concatenation(vector<int> &nums) {
    // Return an empty vector if input is empty
    if (nums.empty()) {
      return {};
    }

    // Allocate space for result, which is twice the size of the input vector
    int n = nums.size();
    vector<int> result(2 * n);

    // Copy nums twice: once into the first half and again into the second half
    for (int i = 0; i < n; ++i) {
      result[i] = nums[i];     // Copy original to the first half
      result[i + n] = nums[i]; // Copy original to the second half
    }

    return result;
  }
};
