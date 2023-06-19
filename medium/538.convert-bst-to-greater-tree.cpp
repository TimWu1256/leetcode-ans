#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() {
        preVal = 0;
    }
    void traversal538(TreeNode *ptr) {
        if (!ptr) {
            return;
        }
        traversal538(ptr->right);
        ptr->val += preVal;
        preVal = ptr->val;
        traversal538(ptr->left);
    }
    TreeNode *convertBST(TreeNode *root) {
        traversal538(root);
        return root;
    }
    int preVal;
};