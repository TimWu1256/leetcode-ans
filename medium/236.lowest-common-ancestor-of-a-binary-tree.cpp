#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() {}
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root == p || root == q || !root) {
            return root;
        }

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left && right) {
            return root;
        }
        if (left && !right) {
            return left;
        }
        if (!left && right) {
            return right;
        }
        if (!left && !right) {
            return nullptr;
        }

        return root;
    }
};