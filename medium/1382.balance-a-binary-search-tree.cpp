#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode *balanceBST(TreeNode *root) {
        vector<int> vals;
        inorder(root, vals);
        return build(0, vals.size() - 1, vals);
    }
    void inorder(TreeNode *root, vector<int> &vals);
    TreeNode *build(int l, int r, vector<int> &vals);
};

void Solution::inorder(TreeNode *root, vector<int> &vals) {
    if (!root) return;
    inorder(root->left, vals);
    vals.push_back(root->val);
    inorder(root->right, vals);
}

TreeNode *Solution::build(int l, int r, vector<int> &vals) {
    if (l > r) return nullptr;
    int m = l + (r - l) / 2;
    TreeNode *root = new TreeNode(vals[m]);
    root->left = build(l, m - 1, vals);
    root->right = build(m + 1, r, vals);
    return root;
}