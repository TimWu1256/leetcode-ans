#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    Solution() {
        temp.clear();
    }
    void traversal530(TreeNode *ptr) {
        if (!ptr) {
            return;
        }
        getMinimumDifference(ptr->left);
        temp.push_back(ptr->val);
        getMinimumDifference(ptr->right);
    }
    int getMinimumDifference(TreeNode *root) {
        if (!root) {
            return 0;
        }
        traversal530(root);
        int myMin = INT_MAX;
        for (int i = 1;i < temp.size();i++) {
            myMin = min(myMin, abs(temp[i] - temp[i - 1]));
        }

        return myMin;
    }
    vector<int> temp;
};