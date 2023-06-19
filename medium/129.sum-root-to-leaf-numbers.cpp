#include "struct/binary-tree-node.h"

class Solution {
public:
    int sumNumbers(TreeNode *root, int num = 0) {
        int sum = 0;

        if (root->left == root->right)
            sum = num * 10 + root->val;
        else {
            if (root->left != nullptr)
                sum = sumNumbers(root->left, num * 10 + root->val);
            else
                sum = 0;
            if (root->right != nullptr)
                sum += sumNumbers(root->right, num * 10 + root->val);
            else
                sum += 0;
        }

        return sum;
    }
};