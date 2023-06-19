#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        str.push_back(s[0]);
        for (int i = 1;i < s.size();i++) {
            if (!str.empty() && str.back() == s[i]) {
                str.pop_back();
                continue;
            }
            str.push_back(s[i]);
        }
        return str;
    }
};