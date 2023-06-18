#include <struct/binary-tree-node.h>

class Solution {
public:
    Solution() :pre(nullptr) {}
    bool isValidBST(TreeNode *root) {
        if (!root) {
            return true;
        }

        bool left = isValidBST(root->left);
        if (pre && pre->val >= root->val) {
            return false;
        }
        pre = root;
        bool right = isValidBST(root->right);

        return  left && right;
    }
    TreeNode *pre;
};