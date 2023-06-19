#include "struct/binary-tree-node.h"
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        int res = 0;
        if (root) {
            int count = 0;
            queue<TreeNode *> q;
            vector<pair<int, int>> v;

            q.push(root);
            while (!q.empty()) {
                count++;
                int qSize = q.size();
                for (int i = 0;i < qSize;i++) {
                    TreeNode *temp = q.front();
                    q.pop();

                    v.push_back(make_pair(count, temp->val));
                    if (temp->left) {
                        q.push(temp->left);
                    }
                    if (temp->right) {
                        q.push(temp->right);
                    }
                }
            }

            pair<int, int> p = v[0];

            for (int i = 1;i < v.size();i++) {
                if (v[i].first > p.first) {
                    p.first = v[i].first;
                    p.second = v[i].second;
                }
            }
            res = p.second;
        }
        return res;
    }
};