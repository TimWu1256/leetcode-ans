#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    void traversal(TreeNode *cur, int count) {
        if (!cur->left && !cur->right && count == 0) {
            out.push_back(temp);
            return;
        }
        if (!cur->left && !cur->right) {
            return;
        }

        if (cur->left) {
            count -= cur->left->val;
            temp.push_back(cur->left->val);
            traversal(cur->left, count);
            count += cur->left->val;
            temp.pop_back();
        }
        if (cur->right) {
            count -= cur->right->val;
            temp.push_back(cur->right->val);
            traversal(cur->right, count);
            count += cur->right->val;
            temp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
        if (!root) {
            return out;
        }

        temp.push_back(root->val);
        traversal(root, targetSum - root->val);

        return out;
    }
    vector<int> temp;
    vector<vector<int>> out;
};