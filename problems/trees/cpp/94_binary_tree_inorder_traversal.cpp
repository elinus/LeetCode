#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Definition of TreeNode for the binary tree
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
   * - Time: O(n), where n is the number of nodes in the tree. Each
   * node is visited once.
   * - Space: O(h), where h is the height of the tree. In the worst
   * case (unbalanced tree), it can be O(n).
   */
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> result;           // Stores the in-order traversal result
    stack<TreeNode *> node_stack; // Stack to hold nodes as we traverse

    // Continue until all nodes are processed
    while (!node_stack.empty() || root != nullptr) {
      // Traverse to the leftmost node
      while (root != nullptr) {
        node_stack.push(root);
        root = root->left;
      }

      // Process the node at the top of the stack
      root = node_stack.top();
      node_stack.pop();
      result.push_back(root->val); // Add the node's value to the result

      // Move to the right subtree
      root = root->right;
    }

    return result;
  }
};

int main() {
  // code
  return 0;
}
