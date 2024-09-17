#include <unordered_set>
#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(n), where n is the number of elements in the input vector.
 *   Insertions and lookups in an unordered set take average O(1) time, so we
 *   perform n insertions in total.
 * - Space: O(n), where n is the number of unique elements. In the worst case,
 *   the set will store all n elements.
 */
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    // Unordered set to keep track of elements encountered
    unordered_set<int> seen_elements;

    // Iterate through the input vector
    for (int num : nums) {
      // If the element is already in the set, we found a duplicate
      if (!seen_elements.insert(num).second) {
        return true;
      }
    }

    // No duplicates found
    return false;
  }
};
