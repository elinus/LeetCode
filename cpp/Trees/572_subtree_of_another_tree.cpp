#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

   public:
    // From NeedCode.io
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
            return false;
        }
        if (isSame(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }

    // Self - Working Soln
    // bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    //     if (!root) return false;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     while (!q.empty()) {
    //         int n = q.size();
    //         for (int i = 0; i < n; i++) {
    //             TreeNode* node = q.front();
    //             q.pop();
    //             if (node->val == subRoot->val) {
    //                 if (isSameTree(node, subRoot)) {
    //                     return true;
    //                 }
    //             }
    //             if (node->left) q.push(node->left);
    //             if (node->right) q.push(node->right);
    //         }
    //     }
    //     return false;
    // }
};