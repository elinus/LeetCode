#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    void helper(TreeNode *root, int &k, int &ans) {
        if (!root) return;
        helper(root->left, k, ans);
        if (--k == 0) {
            ans = root->val;
            return;
        }
        helper(root->right, k, ans);
    }

   public:
    int kthSmallest(TreeNode *root, int k) {
        int ans{-1};
        if (!root) return ans;
        helper(root, k, ans);
        return ans;
    }
};