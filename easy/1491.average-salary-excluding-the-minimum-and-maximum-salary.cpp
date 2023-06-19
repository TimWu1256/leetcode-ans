#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int> &salary) {
        int max = INT_MIN;
        int min = INT_MAX;
        double sum = 0.0;
        int count = salary.size() - 2;

        for (int i = 0;i < salary.size();i++) {
            if (salary[i] > max) {
                max = salary[i];
            }
            if (salary[i] < min) {
                min = salary[i];
            }
            sum += salary[i];
        }

        return (sum - max - min) / count;
    }
};