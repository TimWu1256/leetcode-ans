#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        if (root) {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            nodeVal.push_back(root->val);
        }
        else {
            return nodeVal;
        }
        return nodeVal;
    }
    vector<int> nodeVal;
};