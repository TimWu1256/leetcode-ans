class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        int case1 = 1;
        int case2 = 2;
        int times = 0;

        //Fibonacci sequence
        for (int i = 3; i <= n; i++) {
            times = case1 + case2;
            case1 = case2;
            case2 = times;
        }
        return times;
    }
};