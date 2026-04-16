

class MyQueue {
public:
    queue<int> q;

    MyQueue() {}

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int peek() {
        return q.front();   // FIXED (not last)
    }

    bool empty() {
        return q.empty();
    }
};