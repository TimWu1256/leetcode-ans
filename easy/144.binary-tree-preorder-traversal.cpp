#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        if (root) {
            nodeVal.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        else {
            return nodeVal;
        }
        return nodeVal;
    }
    vector<int> nodeVal;
};