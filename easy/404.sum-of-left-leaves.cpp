#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() :count(0) {}
    int sumOfLeftLeaves(TreeNode *root) {
        if (root) {
            if (root->left) {
                sumOfLeftLeaves(root->left);
                if (!root->left->left && !root->left->right) {
                    count += root->left->val;
                }
            }
            if (root->right) {
                sumOfLeftLeaves(root->right);
            }
        }
        return count;
    }
    int count;
};