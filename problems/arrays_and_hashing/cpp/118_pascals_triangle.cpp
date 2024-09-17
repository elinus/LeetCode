#include <vector>

using namespace std;

/**
 * @complexity
 * - Time: O(num_rows^2), since we compute each row, and for each row, we
 * calculate all elements.
 * - Space: O(num_rows^2), as we are storing all elements of the triangle.
 */
class Solution {
public:
  vector<vector<int>> generate(int num_rows) {
    vector<vector<int>> result;

    // Edge case: If no rows are required, return empty result
    if (num_rows <= 0) {
      return result;
    }

    // Initialize the first row with a single element [1]
    result.push_back({1});

    // Iterate over rows from 2 to num_rows
    for (int n = 1; n < num_rows; ++n) {
      // Create a new row of size n+1, starting and ending with 1
      vector<int> current_row(n + 1, 1);

      // Fill the elements in between based on the previous row
      for (int i = 1; i < n; ++i) {
        current_row[i] = result[n - 1][i - 1] + result[n - 1][i];
      }

      // Add the computed row to the result
      result.push_back(current_row);
    }

    return result;
  }
};
