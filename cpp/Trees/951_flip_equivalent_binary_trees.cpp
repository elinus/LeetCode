#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) return true;
        if (!root1 || !root2 || root1->val != root2->val) return false;
        bool left1 = flipEquiv(root1->left, root2->left);
        bool right1 = flipEquiv(root1->right, root2->right);
        bool left2 = flipEquiv(root1->left, root2->right);
        bool right2 = flipEquiv(root1->right, root2->left);

        return ((left1 && right1) || (left2 && right2));
    }
};