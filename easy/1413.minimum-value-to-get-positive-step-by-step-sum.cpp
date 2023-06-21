#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int> &nums) {
        int size = nums.size();
        vector<int> sum(size, 0);
        sum[0] = 1 + nums[0];
        int min = sum[0];

        for (int i = 1; i < size; i++) {
            sum[i] = sum[i - 1] + nums[i];
            if (sum[i] < min) {
                min = sum[i];
            }
        }

        return min > 0 ? 1 : 1 - min + 1;
    }
};
