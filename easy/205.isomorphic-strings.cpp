#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.size(); i++) {
            char sChar = s[i];
            char tChar = t[i];

            if (sToT.count(sChar)) {
                if (sToT[sChar] != tChar)
                    return false;
            }
            else {
                sToT[sChar] = tChar;
            }

            if (tToS.count(tChar)) {
                if (tToS[tChar] != sChar)
                    return false;
            }
            else {
                tToS[tChar] = sChar;
            }
        }

        return true;
    }
};