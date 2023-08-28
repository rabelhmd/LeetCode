class MyStack {
public:
    
    queue<int> q;
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(pop());
        }
    }
    
    int pop() {
        int x = top();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
