#include "struct/binary-tree-node.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    Solution() {
        nodeVal.clear();
        res.clear();
        path.clear();
    }
    void traversal257(TreeNode *ptr) {
        if (ptr) {
            cout << ptr->val << " ";
            nodeVal.push_back(ptr->val);
            if (!ptr->left && !ptr->right) {
                res.push_back(nodeVal);
                return;
            }
            if (ptr->left) {
                traversal257(ptr->left);
                nodeVal.pop_back();
            }
            if (ptr->right) {
                traversal257(ptr->right);
                nodeVal.pop_back();
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode *root) {
        if (!root) {
            return path;
        }

        traversal257(root);
        string str = "";
        for (int i = 0;i < res.size();i++) {
            for (int j = 0;j < res[i].size();j++) {
                str += to_string(res[i][j]);
                if (j + 1 != res[i].size()) {
                    str += "->";
                }
            }
            path.push_back(str);
            str.clear();
        }
        return path;

    }
    vector<int> nodeVal;
    vector<vector<int>> res;
    vector<string> path;
};