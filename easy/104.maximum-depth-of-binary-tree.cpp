#include "struct/binary-tree-node.h"

class Solution {
public:
    int maxDepth(TreeNode *root) {
        result = 0;
        if (root == 0) return result;

        getDepth(root, 1);

        return result;
    }
    void getDepth(TreeNode *node, int depth) {
        if (depth > result) result = depth;

        if (node->left == nullptr && node->right == nullptr) return;

        if (node->left)
            getDepth(node->left, depth + 1);

        if (node->right)
            getDepth(node->right, depth + 1);

        return;
    }
    int result;
};