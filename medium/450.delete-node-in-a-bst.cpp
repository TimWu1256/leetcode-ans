#include "struct/binary-tree-node.h"

class Solution {
public:
    Solution() {}
    TreeNode *deleteNode(TreeNode *root, int key) {
        if (!root) {
            return root;
        }

        if (root->val == key) {
            if (!root->left) {
                return root->right;
            }
            else if (!root->right) {
                return root->left;
            }
            else {
                TreeNode *cur = root->right;

                while (cur->left) {
                    cur = cur->left;
                }
                cur->left = root->left;

                TreeNode *temp = root;

                root = root->right;
                delete temp;

                return root;
            }
        }

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        }
        if (root->val < key) {
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};