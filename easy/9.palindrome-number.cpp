#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string ss1 = to_string(x);
        string ss2 = ss1;
        reverse(ss2.begin(), ss2.end());
        if (ss2 == ss1) {
            return true;
        }
        else {
            return false;
        }
    }
};