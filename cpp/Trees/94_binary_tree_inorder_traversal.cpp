#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> inorder;
        if (!root) return inorder;
        stack<TreeNode *> s;
        while (true) {
            while (root) {
                s.push(root);
                root = root->left;
            }
            if (s.empty()) break;
            root = s.top();
            s.pop();
            inorder.push_back(root->val);
            root = root->right;
        }
        return inorder;
    }
};