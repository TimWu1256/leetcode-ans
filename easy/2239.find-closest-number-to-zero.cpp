#include <vector>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int> &nums) {
        vector<int> distances;

        for (const auto &num : nums) {
            distances.push_back(abs(num));
        }

        int minDistance = distances[0],
            minDistanceIndex = 0;
        for (int i = 1; i < distances.size(); i++) {
            if (distances[i] < minDistance || distances[i] == minDistance && nums[i] > nums[minDistanceIndex]) {
                minDistance = distances[i];
                minDistanceIndex = i;
            }
        }

        return nums[minDistanceIndex];
    }
};