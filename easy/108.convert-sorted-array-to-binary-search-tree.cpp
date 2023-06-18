#include "struct/binary-tree-node.h"

class Solution {
public:
    TreeNode *traversal(vector<int> &nums, int left, int right) {
        if (left > right - 1) {
            return nullptr;
        }

        int mid = left + ((right - left) / 2);
        TreeNode *root = new TreeNode(nums[mid]);

        root->left = traversal(nums, left, mid);
        root->right = traversal(nums, mid + 1, right);

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        TreeNode *root = traversal(nums, 0, nums.size());
        return root;
    }
};