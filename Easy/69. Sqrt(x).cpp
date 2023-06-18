class Solution {
public:
    int mySqrt(int x) {
        unsigned long int divisor = 1;
        while (x) {
            if (x < divisor * divisor) {
                return divisor - 1;
            }
            else if (x == divisor * divisor) {
                return divisor;
            }
            else {
                divisor++;
            }
        }
        return x;
    }
};