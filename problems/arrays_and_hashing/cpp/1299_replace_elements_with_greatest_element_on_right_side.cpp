#include <algorithm> // For std::max (not strictly needed but for clarity)
#include <initializer_list>
#include <vector>

class Solution {
public:
  std::vector<int> replaceElements(std::vector<int> &arr) {
    int n = arr.size(); // Get the size of the array

    // If the array has only one element, directly return {-1}
    if (n == 1) {
      return {-1};
    }

    // Initialize max_so_far with the last element, and set it to -1 as required
    int max_so_far = arr[n - 1];
    arr[n - 1] = -1; // Last element should always be -1

    // Traverse the array from the second last element to the first
    for (int i = n - 2; i >= 0; --i) {
      // Temporarily store the current element
      int current = arr[i];

      // Replace current element with the maximum element to its right
      arr[i] = max_so_far;

      // Update max_so_far if the current element is greater
      max_so_far = std::max(max_so_far, current);
    }

    // Return the modified array
    return arr;
  }
};

int main() {
  std::vector<int> arr = {17, 18, 5, 4, 6, 1};
  Solution sol;
  sol.replaceElements(arr);
  return 0;
}
