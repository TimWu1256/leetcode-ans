#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int last_pos[256];
        for (int i = 0; i < 256; i++) {
            last_pos[i] = -1;
        }

        char *left = &s[0], *right = &s[0];
        int max_len = 0;

        while (*right != '\0') {
            char c = *right;

            if (last_pos[c] >= left - &s[0]) {
                left = &s[last_pos[c] + 1];
            }

            last_pos[c] = right - &s[0];

            max_len = max(max_len, (int)(right - left + 1));

            right++;
        }

        return max_len;
    }
};