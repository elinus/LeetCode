#include <vector>

using namespace std;

/**
 * - Time: O(row_index^2), where row_index is the index of the row to
 * generate. We have to update each element of the row row_index times.
 * - Space: O(row_index), as we maintain only a single row for
 * computations.
 */
class Solution {
public:
  vector<int> getRow(int row_index) {
    // Initialize the result vector with size row_index + 1, filled with 1's
    vector<int> row(row_index + 1, 1);

    // Start building the row from row 2, as row 0 and row 1 are trivial [1] and
    // [1, 1]
    for (int n = 2; n <= row_index; ++n) {
      // Update the row from the end to avoid overwriting values we still need
      for (int i = n - 1; i > 0; --i) {
        row[i] += row[i - 1];
      }
    }

    return row;
  }
};
