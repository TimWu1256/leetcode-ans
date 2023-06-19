#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        if (!inorder.size() || !postorder.size()) {
            return nullptr;
        }

        TreeNode *root = new TreeNode(postorder[postorder.size() - 1]);
        if (postorder.size() == 1) {
            return root;
        }

        int index = 0;
        for (;index < inorder.size();index++) {
            if (inorder[index] == root->val) {
                break;
            }
        }

        vector<int> lInorder(inorder.begin(), inorder.begin() + index);
        vector<int> rInorder(inorder.begin() + index + 1, inorder.end());
        postorder.resize(postorder.size() - 1);
        vector<int> lPostorder(postorder.begin(), postorder.begin() + lInorder.size());
        vector<int> rPostorder(postorder.begin() + lInorder.size(), postorder.end());

        root->left = buildTree(lInorder, lPostorder);
        root->right = buildTree(rInorder, rPostorder);
        return root;
    }
};