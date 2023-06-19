#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    void Util(TreeNode* root, int targetSum, bool& ans) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right && targetSum - root->val == 0) {
            ans = true;
            return;
        }
        Util(root->left, targetSum - root->val, ans);
        Util(root->right, targetSum - root->val, ans);
    }

   public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        bool ans = false;
        Util(root, targetSum, ans);
        return ans;
    }
};