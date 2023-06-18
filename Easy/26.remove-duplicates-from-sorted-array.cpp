#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int k = 1;

        if (nums.size() < 2) {
            return nums.size();
        }
        for (int i = 1;i < nums.size();i++) {
            if (nums[i] > nums[i - 1]) {
                if (nums[i] > nums[k - 1]) {
                    nums[k] = nums[i];
                    k++;
                }
            }
        }

        return k;
    }
};