#include <queue>
using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int qSize = q.size();
        for (int i = 0;i < qSize - 1;i++) {
            qTemp.push(q.front());
            q.pop();
        }
        int res = q.back();
        q.pop();
        for (int i = 0;i < qSize - 1;i++) {
            q.push(qTemp.front());
            qTemp.pop();
        }
        return res;
    }

    /** Get the top element. */
    int top() {
        int res = this->pop();
        q.push(res);
        return res;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }

    queue<int> q;
    queue<int> qTemp;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */