#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    int findBottomLeftValue(TreeNode* root) {
        int ans{INT_MAX};
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        ans = root->val;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                ans = node->val;
                if (node->right) q.push(node->right);
                if (node->left) {
                    ans = node->left->val;
                    q.push(node->left);
                }
            }
        }

        return ans;
    }
};