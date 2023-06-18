#include <cmath>

class Solution {
public:
    int reverse(int x) {
        long int reversed_x = 0;
        while (x) {
            reversed_x = (reversed_x * 10) + (x % 10);
            x /= 10;
            if (reversed_x > (pow(2, 31) - 1) || reversed_x < (-pow(2, 31))) {
                return 0;
            }
        }
        return reversed_x;
    }
};