#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        vector<pair<int, int>> v;
        v.clear();
        vector<int> res;
        res.clear();
        pair<int, int> maxFreq(0, INT_MIN);
        int index = 0;

        for (auto num : nums) {
            bool isDuplicated = true;
            for (int i = 0;i < v.size();i++) {
                if (v[i].first == num) {
                    v[i].second++;
                    isDuplicated = false;
                    break;
                }
            }
            if (isDuplicated) {
                v.push_back(make_pair(num, 1));
            }
        }

        while (k) {
            for (int i = 0;i < v.size();i++) {
                if (v[i].second > maxFreq.second) {
                    maxFreq.first = v[i].first;
                    maxFreq.second = v[i].second;
                    index = i;
                }
            }
            res.push_back(maxFreq.first);
            maxFreq.second = INT_MIN;
            v.erase(v.begin() + index);
            k--;
        }

        return res;
    }
};