#include <iostream>
#include <stack>

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
     * - Time: O(n), where n is the number of nodes in the smaller tree.
     *   Each node is visited exactly once.
     * - Space: O(h), where h is the height of the tree (due to the recursive
     stack).
     *   In the worst case, this could be O(n) for a completely unbalanced tree.
     */
  bool is_same_tree(TreeNode *p, TreeNode *q) {
    // If both nodes are null, the trees are the same
    if (!p && !q)
      return true;

    // If only one of the nodes is null, the trees are different
    if (!p || !q)
      return false;

    // Compare values at current nodes and recursively check left and right
    // subtrees
    return (p->val == q->val) && is_same_tree(p->left, q->left) &&
           is_same_tree(p->right, q->right);
  }
};

/**
 * @complexity
 * - Time: O(n), where n is the number of nodes in the smaller tree.
 *   Each node is visited exactly once.
 * - Space: O(h), where h is the maximum height of the tree (due to the stack).
 *   In the worst case, this could be O(n) for a completely unbalanced tree.
 */
bool is_same_tree(TreeNode *p, TreeNode *q) {
  stack<TreeNode *> stack_p, stack_q;

  stack_p.push(p);
  stack_q.push(q);

  while (!stack_p.empty() && !stack_q.empty()) {
    TreeNode *node_p = stack_p.top();
    TreeNode *node_q = stack_q.top();
    stack_p.pop();
    stack_q.pop();

    // If both nodes are null, continue to the next iteration
    if (!node_p && !node_q)
      continue;

    // If one of the nodes is null, or the values don't match, return false
    if (!node_p || !node_q || node_p->val != node_q->val)
      return false;

    // Push right and left children of both nodes to the respective stacks
    stack_p.push(node_p->right);
    stack_q.push(node_q->right);
    stack_p.push(node_p->left);
    stack_q.push(node_q->left);
  }

  // After the traversal, both stacks should be empty if trees are identical
  return stack_p.empty() && stack_q.empty();
}

int main() {
  // Code
}
