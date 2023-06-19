#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    // NeetCode.io
    bool helper1(TreeNode* root, long left, long right) {
        if (!root) return true;
        if (root->val < right && root->val > left) {
            return helper(root->left, left, root->val) &&
                   helper(root->right, root->val, right);
        }
        return false;
    }

    // Self - Working/Accepted
    void helper(TreeNode* root, long minimum, long maximum, bool& ans) {
        if (!root) {
            return;
        }
        if (root->val <= minimum || root->val >= maximum) {
            ans = false;
            return;
        }
        util(root->left, minimum, root->val, ans);
        util(root->right, root->val, maximum, ans);
    }

   public:
    bool isValidBST(TreeNode* root) {
        if (!root) false;
        bool ans{true};
        helper(root, LONG_MIN, LONG_MAX, ans);
        return ans;
    }
};