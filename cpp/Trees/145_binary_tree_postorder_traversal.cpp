#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        stack<TreeNode*> s;
        while (true) {
            while (root) {
                ans.push_back(root->val);
                s.push(root);
                root = root->right;
            }
            if (s.empty()) break;
            root = s.top();
            s.pop();
            root = root->left;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};