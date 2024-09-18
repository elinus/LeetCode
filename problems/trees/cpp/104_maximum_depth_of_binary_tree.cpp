#include <iostream>
#include <utility>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  /**
   * @complexity
   * - Time: O(n), where n is the number of nodes in the tree. Each node is
   * visited once.
   * - Space: O(h), where h is the height of the tree. In the worst case, it can
   * be O(n) for an unbalanced tree.
   */
  int maxDepth(TreeNode *root) {
    // Base case: If the node is null, the depth is 0
    if (!root) {
      return 0;
    }

    // Recursively calculate the depth of the left and right subtrees
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);

    // The depth of the current node is 1 (for the node itself) plus the maximum
    // of the left and right subtree depths
    return max(left_depth, right_depth) + 1;
  }
};

/**
 * @complexity
 * - Time: O(n), where n is the number of nodes in the tree.
 * - Space: O(n), where n is the number of nodes. In the worst case,
 * the space complexity is proportional to the number of nodes at the last
 * level.
 */
int max_depth(TreeNode *root) {
  if (!root) {
    return 0; // If tree is empty, return depth 0
  }

  int depth = 0;
  queue<TreeNode *> node_queue; // Queue for BFS, stores nodes at each level
  node_queue.push(root);        // Start with the root node

  // BFS: Process each level
  while (!node_queue.empty()) {
    int level_size = node_queue.size(); // Number of nodes at the current level
    depth++;                            // Increment depth for each level

    // Process all nodes at the current level
    for (int i = 0; i < level_size; ++i) {
      TreeNode *current = node_queue.front();
      node_queue.pop();

      // Add left child if exists
      if (current->left) {
        node_queue.push(current->left);
      }

      // Add right child if exists
      if (current->right) {
        node_queue.push(current->right);
      }
    }
  }

  return depth; // Return the maximum depth of the tree
}

int main() {}
