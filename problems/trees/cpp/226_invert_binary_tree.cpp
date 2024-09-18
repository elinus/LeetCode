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
  // Recursive solution

  /**
   * @brief Inverts a binary tree recursively.
   * @complexity
   * - Time: O(n), where n is the number of nodes in the tree. Each node is
   * visited once.
   * - Space: O(h), where h is the height of the tree. In the worst case, it is
   * O(n) for an unbalanced tree due to the recursive call stack.
   */
  TreeNode *invertTree(TreeNode *root) {
    // Base case: If the node is null, return null
    if (!root)
      return root;

    // Recursively invert the left and right subtrees
    root->left = invertTree(root->left);
    root->right = invertTree(root->right);

    // Swap the left and right children of the current node
    swap(root->left, root->right);

    // Return the current root after inversion
    return root;
  }

  /**
   * @complexity
   * - Time: O(n), where n is the number of nodes in the tree. Each
   * node is visited once.
   * - Space: O(h), where h is the height of the tree. In the worst
   * case, it is O(n) for an unbalanced tree.
   */
  TreeNode *invertTreeIter(TreeNode *root) {
    if (!root) {
      return root; // Return if the tree is empty
    }

    // Stack to store nodes for processing
    stack<TreeNode *> node_stack;
    node_stack.push(root);

    // Iteratively invert the tree using stack
    while (!node_stack.empty()) {
      TreeNode *current = node_stack.top();
      node_stack.pop();

      // Swap left and right children of the current node
      swap(current->left, current->right);

      // Push the children to the stack if they exist
      if (current->left) {
        node_stack.push(current->left);
      }
      if (current->right) {
        node_stack.push(current->right);
      }
    }

    return root; // Return the root of the inverted tree
  }
};

int main() {}
