#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int> &gain) {
        int maxAlt = INT_MIN;
        int curAlt = 0;

        for (const auto &g : gain) {
            curAlt += g;
            if (curAlt > maxAlt) {
                maxAlt = curAlt;
            }
        }

        return maxAlt > 0 ? maxAlt : 0;
    }
};