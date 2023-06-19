#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    void helper(TreeNode* root, int k, int& ans) {
        if (!root) return;
        if (root->val >= k) {
            ans += 1;
        }
        helper(root->left, k, ans);
        helper(root->right, k, ans);
    }

   public:
    int goodNodes(TreeNode* root) {
        int ans{0};
        if (!root) return ans;
        helper(root, root->val, ans);
        return ans;
    }
};