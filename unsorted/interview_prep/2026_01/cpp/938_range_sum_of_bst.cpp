// Definition for a binary tree node.
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
  // Time Complexity: O(n) - worst case, but O(k) average where k is nodes in
  // range
  // Space Complexity: O(h) - recursion stack where h is height of tree

  void dfs(TreeNode *node, int &low, int &high, int &sum) {
    if (!node)
      return;
    if (node->val >= low && node->val <= high)
      sum += node->val;
    // Prune left subtree if current value <= low
    if (node->val > low) {
      dfs(node->left, low, high, sum);
    }

    // Prune right subtree if current value >= high
    if (node->val < high) {
      dfs(node->right, low, high, sum);
    }
  }

public:
  int rangeSumBST(TreeNode *root, int low, int high) {
    int sum{0};
    dfs(root, low, high, sum);
    return sum;
  }
};