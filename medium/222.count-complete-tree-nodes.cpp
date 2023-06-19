#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() :count(0) {}
    int countNodes(TreeNode *root) {
        if (root) {
            countNodes(root->left);
            count++;
            countNodes(root->right);
        }
        else {
            return count;
        }
        return count;
    }
    int count;
};