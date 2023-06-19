#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() {}
    TreeNode *trimBST(TreeNode *root, int low, int high) {
        if (!root) {
            return root;
        }

        if (root->val > high) {
            TreeNode *left = trimBST(root->left, low, high);
            return left;
        }
        if (root->val < low) {
            TreeNode *right = trimBST(root->right, low, high);
            return right;
        }

        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);

        return root;
    }
};