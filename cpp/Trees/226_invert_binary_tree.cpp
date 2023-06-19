#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        swap(root->left, root->right);
        return root;
    }
};