#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    int height(TreeNode* root, int& dia) {
        if (!root) return 0;
        int lh = height(root->left, dia);
        int rh = height(root->right, dia);
        dia = max(dia, lh + rh);
        return max(lh, rh) + 1;
    }

   public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diam = 0;
        if (!root) return diam;
        height(root, diam);
        return diam;
    }
};