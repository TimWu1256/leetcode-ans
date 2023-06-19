#include "struct/binary-tree-node.h"
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        int mx = INT_MIN;
        treeSum(root, mx);
        return mx;
    }
    int treeSum(TreeNode *root, int &mx);
};

int Solution::treeSum(TreeNode *root, int &mx) {
    if (root == nullptr) return 0;

    int l = max(0, treeSum(root->left, mx));
    int r = max(0, treeSum(root->right, mx));

    int cur = root->val + l + r;

    mx = max(mx, cur);

    return root->val + max(l, r);
}