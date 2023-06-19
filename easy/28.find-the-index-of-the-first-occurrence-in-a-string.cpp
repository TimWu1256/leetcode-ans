#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos)
            return haystack.find(needle);
        else if (needle.empty())
            return 0;
        else
            return -1;
    }
};