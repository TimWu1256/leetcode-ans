#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> out;
    vector<int> inorderTraversal(TreeNode *root) {
        TreeNode *ptr = root;

        if (ptr != nullptr) {
            inorderTraversal(ptr->left);
            out.push_back(ptr->val);
            inorderTraversal(ptr->right);
        }

        return out;
    }
};