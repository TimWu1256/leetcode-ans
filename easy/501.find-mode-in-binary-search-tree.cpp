#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    Solution() {
        maxCount = 0;
        count = 0;
        temp.clear();
        pre = nullptr;
    }
    void traversal501(TreeNode *cur) {
        if (!cur) {
            return;
        }

        traversal501(cur->left);
        if (!pre) {
            count = 1;
        }
        else if (pre->val == cur->val) {
            count++;
        }
        else {
            count = 1;
        }
        pre = cur;

        if (count == maxCount) {
            temp.push_back(cur->val);
        }
        if (count > maxCount) {
            maxCount = count;
            temp.clear();
            temp.push_back(cur->val);
        }
        traversal501(cur->right);

        return;
    }
    vector<int> findMode(TreeNode *root) {
        traversal501(root);
        return temp;
    }
    int maxCount;
    int count;
    vector<int> temp;
    TreeNode *pre;
};