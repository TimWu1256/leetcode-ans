#include <string>
using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        int maximum = 0;
        int index = 0;
        string sol = std::to_string(num);
        for (unsigned i = 0; i < std::to_string(num).size(); i++) {
            index = i;
            maximum = sol[i];
            for (unsigned j = i + 1; j < std::to_string(num).size(); j++) {
                if (sol[j] >= maximum) {
                    index = j;
                    maximum = sol[j];
                }
            }
            if (sol[i] < sol[index]) {
                swap(sol[i], sol[index]);
                break;
            }
        }
        return atoi(sol.c_str());
    }
};