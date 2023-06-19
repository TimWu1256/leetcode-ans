#include "struct/binary-tree-node.h"

class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        if (root) {
            if (root->left || root->right) {
                TreeNode *lTemp = root->left;
                root->left = root->right;
                root->right = lTemp;
                invertTree(root->left);
                invertTree(root->right);
            }
        }
        return root;
    }
};