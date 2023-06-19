#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            int right = INT_MAX;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                right = node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (right != INT_MAX) ans.push_back(right);
        }

        return ans;
    }
};