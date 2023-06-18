#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string prefix = strs[0];
        for (unsigned i = 1;i < strs.size();i++) {
            string buffer = strs[i];
            for (unsigned j = 0;j < prefix.size();j++) {
                if (j < buffer.size() && prefix[j] == buffer[j]) {
                    continue;
                }
                else {
                    prefix = prefix.substr(0, j);
                }
            }
        }
        return prefix;
    }
};