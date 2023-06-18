#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int indexA = a.size() - 1;
        int indexB = b.size() - 1;
        int carry = 0;
        int tmp = 0;
        string sum = "";

        while (indexA >= 0 || indexB >= 0 || carry == 1) {
            tmp = carry;
            if (indexA >= 0) {
                if (a[indexA] == '0') {
                    tmp += 0;
                }
                else {
                    tmp += 1;
                }
                indexA--;
            }
            if (indexB >= 0) {
                if (b[indexB] == '0') {
                    tmp += 0;
                }
                else {
                    tmp += 1;
                }
                indexB--;
            }
            carry = tmp / 2;
            if (tmp == 2) {
                sum += "0";
            }
            else if (tmp == 3) {
                sum += "1";
            }
            else {
                if (tmp == 0) {
                    sum += "0";
                }
                else {
                    sum += "1";
                }
            }
        }
        reverse(sum.begin(), sum.end());

        return sum;
    }
};