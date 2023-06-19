#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() {
        parent = nullptr;
        cur = nullptr;
    }
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        cur = root;
        TreeNode *insert_node = new TreeNode(val);

        while (cur) {
            parent = cur;
            if (val < cur->val) {
                cur = cur->left;
            }
            else {
                cur = cur->right;
            }
        }

        if (parent) {
            if (val < parent->val) {
                parent->left = insert_node;
            }
            else {
                parent->right = insert_node;
            }
        }
        else {
            root = insert_node;
        }

        return root;
    }
    TreeNode *parent;
    TreeNode *cur;
};