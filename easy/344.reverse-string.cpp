#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        queue<char> q;
        for (int i = 0;i < s.size();i++) {
            q.push(s[s.size() - i - 1]);
        }
        s.clear();
        int qSize = q.size();
        for (int i = 0;i < qSize;i++) {
            s.push_back(q.front());
            q.pop();
        }
    }
};