#include "struct/binary-tree-node.h"
#include <algorithm>
using namespace std;

class  Solution {
public:
    int getDepth(TreeNode *ptr) {
        if (ptr == nullptr) {
            return  0;
        }

        int leftDepth = getDepth(ptr->left);
        if (leftDepth == -1) {
            return -1;
        }

        int rightDepth = getDepth(ptr->right);
        if (rightDepth == -1) {
            return -1;
        }

        if (abs(leftDepth - rightDepth) > 1) {
            return -1;
        }
        else {
            return 1 + max(leftDepth, rightDepth);
        }
    }
    bool isBalanced(TreeNode *root) {
        if (getDepth(root) == -1) {
            return false;
        }
        else {
            return true;
        }
    }
};