#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
    }

   public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isSameTree(root, root);
    }
};