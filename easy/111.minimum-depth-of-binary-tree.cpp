#include "struct/binary-tree-node.h"

class  Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == NULL) {
            return  0;
        }

        int  leftDepth = minDepth(root->left);
        int  rightDepth = minDepth(root->right);

        if (root->left == nullptr && root->right != nullptr) {
            return  1 + rightDepth;
        }
        if (root->left != nullptr && root->right == nullptr) {
            return  1 + leftDepth;
        }

        int minDepth = 1 + min(leftDepth, rightDepth);
        return  minDepth;
    }
};