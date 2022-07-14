class MyQueue {
public:
    
    vector<int> v;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        int x = v[0];
        v.erase(v.begin());
        return x;
    }
    
    int peek() {
        return v[0];
    }
    
    bool empty() {
        return v.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */