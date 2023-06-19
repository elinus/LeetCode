#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while (!q.empty()) {
            int qsize = q.size();
            vector<int> tmp;
            for (int i = 0; i < qsize; ++i) {
                auto node = q.front();
                q.pop();
                tmp.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (level % 2) reverse(begin(tmp), end(tmp));
            level++;
            ans.push_back(tmp);
        }
        return ans;
    }
};