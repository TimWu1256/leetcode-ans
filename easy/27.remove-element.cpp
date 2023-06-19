#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int count = 0;

        for (int i = 0;i < nums.size();i++) {
            if (nums[i] == val) {
                for (int j = i + 1;j < nums.size();j++) {
                    if (nums[j] != val) {
                        swap(nums[i], nums[j]);
                    }
                }
            }
        }
        for (int i = 0;i < nums.size();i++) {
            if (nums[i] == val) {
                count++;
            }
        }

        return nums.size() - count;
    }
};