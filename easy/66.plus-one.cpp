#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int carry = 1;
        vector<int> tmp;
        tmp.clear();

        if ((digits[digits.size() - 1] + carry) / 10 == 1) {
            for (int i = 1;i <= digits.size();i++) {
                if ((digits[digits.size() - i] + carry) / 10 == 1) {
                    digits[digits.size() - i] = (digits[digits.size() - i] + carry) % 10;
                    tmp.push_back(digits[digits.size() - i]);
                    if (i == digits.size()) {
                        tmp.push_back(carry);
                    }
                }
                else {
                    tmp.push_back(digits[digits.size() - i] + carry);
                    if (i != digits.size()) {
                        for (int j = i + 1;j <= digits.size();j++) {
                            tmp.push_back(digits[digits.size() - j]);
                        }
                    }
                    goto here;
                }
            }
        }
        else {
            digits[digits.size() - 1] += carry;
            return digits;
        }
    here:
        std::reverse(tmp.begin(), tmp.end());
        return tmp;
    }
};