#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int leftBorder = -2;
        int rightBorder = -2;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
                leftBorder = right;
            }
            else
                left = mid + 1;
        }

        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
                rightBorder = left;
            }
        }

        if (leftBorder == -2 || rightBorder == -2) return { -1, -1 };
        if (rightBorder - leftBorder > 1) return { leftBorder + 1, rightBorder - 1 };

        return { -1, -1 };
    }
};