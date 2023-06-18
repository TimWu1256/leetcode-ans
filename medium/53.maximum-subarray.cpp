#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int max = nums[0];
        int tmpMax = max;

        for (int i = 1;i < nums.size();i++) {
            if (tmpMax + nums[i] > nums[i]) {
                tmpMax += nums[i];
            }
            else {
                tmpMax = nums[i];
            }
            if (max <= tmpMax) {
                max = tmpMax;
            }
        }
        return max;
    }
};