#include "struct/binary-tree-node.h"

class Solution {
public:
    TreeNode *searchBST(TreeNode *root, int val) {
        while (root && val != root->val) {
            if (val < root->val) {
                root = root->left;
                continue;
            }
            if (val > root->val) {
                root = root->right;
                continue;
            }
        }
        return root;
    }
};