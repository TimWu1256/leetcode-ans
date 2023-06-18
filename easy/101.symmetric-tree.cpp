#include "struct/binary-tree-node.h"

class Solution {
public:
    bool checkSymmetric(TreeNode *ptr1, TreeNode *ptr2) {
        if (ptr1 != ptr2 && (ptr1 == nullptr || ptr2 == nullptr)) {
            return false;
        }

        if ((ptr1 != nullptr && ptr2 != nullptr) && ptr1->val != ptr2->val) {
            return false;
        }

        if (ptr1 != nullptr && ptr2 != nullptr) {
            return checkSymmetric(ptr1->left, ptr2->right) && checkSymmetric(ptr1->right, ptr2->left);
        }

        return true;
    }
    bool isSymmetric(TreeNode *root) {
        return checkSymmetric(root, root);
    }
};