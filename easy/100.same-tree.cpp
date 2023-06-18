#include "struct/binary-tree-node.h"

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p != q && (!p || !q)) {
            return false;
        }
        if (p && p->val != q->val) {
            return false;
        }
        if (p) {
            return  isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }

        return true;
    }
};