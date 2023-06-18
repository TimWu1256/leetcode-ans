#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (unsigned i = 0;i < s.size();i++) {
            if (s.empty()) break;

            if (s[i] == 'I') {
                if ((i + 1) < s.size()) {
                    if (s[i + 1] == 'V') {
                        sum += 4;
                        s.erase(i + 1, 1);
                    }
                    else if (s[i + 1] == 'X') {
                        sum += 9;
                        s.erase(i + 1, 1);
                    }
                    else sum += 1;
                }
                else sum += 1;
            }

            if (s[i] == 'V') sum += 5;

            if (s[i] == 'X') {
                if ((i + 1) < s.size()) {
                    if (s[i + 1] == 'L') {
                        sum += 40;
                        s.erase(i + 1, 1);
                    }
                    else if (s[i + 1] == 'C') {
                        sum += 90;
                        s.erase(i + 1, 1);
                    }
                    else sum += 10;
                }
                else sum += 10;
            }

            if (s[i] == 'L') sum += 50;

            if (s[i] == 'C') {
                if ((i + 1) < s.size()) {
                    if (s[i + 1] == 'D') {
                        sum += 400;
                        s.erase(i + 1, 1);
                    }
                    else if (s[i + 1] == 'M') {
                        sum += 900;
                        s.erase(i + 1, 1);
                    }
                    else sum += 100;
                }
                else sum += 100;
            }

            if (s[i] == 'D') sum += 500;

            if (s[i] == 'M') sum += 1000;
        }
        return sum;
    }
};