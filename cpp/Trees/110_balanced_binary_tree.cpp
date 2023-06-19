#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    int height(TreeNode *root, bool &ans) {
        if (!root) return 0;
        int lt = height(root->left, ans);
        int rt = height(root->right, ans);
        if (abs(rt - lt) > 1) {
            ans = false;
            // return -1;
        }
        return max(lt, rt) + 1;
    }

   public:
    bool isBalanced(TreeNode *root) {
        if (!root) return true;
        bool ans = true;
        height(root, ans);
        return ans;
    }
};