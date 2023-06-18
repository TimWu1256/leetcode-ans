#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.find_last_not_of(' ') == string::npos)
            return 0;

        while (s.back() == ' ')
            s.pop_back();
        int pos = s.find_last_of(' ');
        if (pos == string::npos)
            return s.size();

        string last = s.substr(pos + 1, s.size());
        return last.size();
    }
};