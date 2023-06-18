#include "struct/binary-tree-node.h"
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        if (root) {
            queue<TreeNode *> q;
            q.push(root);
            while (!q.empty()) {
                int qSize = q.size();
                for (int i = 0;i < qSize;i++) {
                    TreeNode *temp = q.front();
                    q.pop();

                    nodeVal.push_back(temp->val);
                    if (temp->left) {
                        q.push(temp->left);
                    }
                    if (temp->right) {
                        q.push(temp->right);
                    }
                }
                res.push_back(nodeVal);
                nodeVal.clear();
            }
        }
        else {
            return res;
        }
        return res;
    }
    vector<int> nodeVal;
    vector<vector<int>> res;
};