class BrowserHistory {
public:
    stack <string> history, future;
    
    BrowserHistory(string homepage) {
        visit(homepage);
    }
    
    void visit(string url) {
        history.push(url);
        future = stack<string>();
    }
    
    string back(int steps) {
        while(history.size() > 1 and steps-- > 0) {
            future.push(history.top()), history.pop();
        }
        return history.top();
    }
    
    string forward(int steps) {
        while(!future.empty() and steps-- > 0) {
            history.push(future.top()), future.pop();
        }
        return history.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */