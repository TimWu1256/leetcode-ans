#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' ||
                s[i] == '[' ||
                s[i] == '{') {
                str.push_back(s[i]);
            }
            else {
                if (str.empty()) {
                    return false;
                }
                string buffer = "";
                buffer.push_back(str.back());
                str.pop_back();
                if (buffer.back() != '(' && s[i] == ')' ||
                    buffer.back() != '{' && s[i] == '}' ||
                    buffer.back() != '[' && s[i] == ']') {
                    return false;
                }
            }
        }
        return str.empty();
    }
};