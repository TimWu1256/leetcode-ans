#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        if (nums.front() > target) return 0;
        else if (nums.back() < target) return nums.size();
        else {
            for (int i = 0;i < nums.size();i++) {
                if (nums[i] >= target) return i;
                else continue;
            }
        }
        return 0;
    }
};