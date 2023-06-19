#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkQueueEqual(queue<int> q) {
        int pre;
        while (q.size()) {
            pre = q.front();
            q.pop();
            if (pre != q.front() && q.size() != 0)
                return false;
        }
        return true;
    }
    int countStudents(vector<int> &students, vector<int> &sandwiches) {
        queue<int> q;
        stack<int> s;
        for (auto n : students)
            q.push(n);
        for (auto i = sandwiches.end() - 1; i >= sandwiches.begin(); i--)
            s.push(*i);
        while (q.size()) {
            if (checkQueueEqual(q) && q.front() != s.top())
                break;
            if (q.front() == s.top()) {
                q.pop();
                s.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};