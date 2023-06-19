#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    void helper(TreeNode* root, int sum, int& ans) {
        if (!root) return;
        sum = root->val + sum * 10;
        if (!root->left && !root->right) {
            ans += sum;
        }
        helper(root->left, sum, ans);
        helper(root->right, sum, ans);
    }

   public:
    int sumNumbers(TreeNode* root) {
        int ans{0};
        if (!root) return ans;
        helper(root, 0, ans);
        return ans;
    }
};