#include "struct/binary-tree-node.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        if (!nums.size()) {
            return nullptr;
        }

        int maxNum = nums[0];
        int index = 0;
        for (int i = 1;i < nums.size();i++) {
            if (nums[i] > maxNum) {
                maxNum = nums[i];
                index = i;
            }
        }

        TreeNode *root = new TreeNode(maxNum);
        vector<int> lNums(nums.begin(), nums.begin() + index);
        vector<int> rNums(nums.begin() + index + 1, nums.end());

        root->left = constructMaximumBinaryTree(lNums);
        root->right = constructMaximumBinaryTree(rNums);
        return root;
    }
};