#include "TreeNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int lt = maxDepth(root->left);
        int rt = maxDepth(root->right);
        return max(lt, rt) + 1;
    }
};