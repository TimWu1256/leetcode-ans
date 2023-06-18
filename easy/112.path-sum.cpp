#include "struct/binary-tree-node.h"

class Solution {
private:
    bool traversal(TreeNode *cur, int count) {
        if (!cur->left && !cur->right && count == 0) {
            return true;
        }
        if (!cur->left && !cur->right) {
            return false;
        }

        if (cur->left) {
            count -= cur->left->val;;
            if (traversal(cur->left, count)) {
                return true;
            }
            count += cur->left->val;
        }
        if (cur->right) {
            count -= cur->right->val;
            if (traversal(cur->right, count)) {
                return true;
            }
            count += cur->right->val;
        }
        return false;
    }
public:
    bool hasPathSum(TreeNode *root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        return traversal(root, targetSum - root->val);
    }
};