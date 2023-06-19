#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if (!root) return preorder;
        stack<TreeNode*> s;
        while (true) {
            while (root) {
                preorder.push_back(root->val);
                s.push(root);
                root = root->left;
            }
            if (s.empty()) break;
            root = s.top();
            s.pop();
            root = root->right;
        }
        return preorder;
    }
};