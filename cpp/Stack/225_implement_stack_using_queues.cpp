#include "stdc++.h"
using namespace std;

class MyStack {
    queue<int> q1, q2;

   public:
    MyStack() {}

    void push(int x) { q1.push(x); }

    int pop() {
        int front = INT_MIN;
        while (!q1.empty()) {
            front = q1.front();
            if (q1.size() != 1) q2.push(front);
            q1.pop();
        }
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return front;
    }

    int top() {
        int front = INT_MIN;
        while (!q1.empty()) {
            front = q1.front();
            q2.push(front);
            q1.pop();
        }
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return front;
    }

    bool empty() { return q1.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */