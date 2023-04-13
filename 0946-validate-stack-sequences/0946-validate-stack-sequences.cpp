class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> St;
        int id = 0;
        for(auto &x: pushed) {
            St.push(x);
            while(!St.empty() and St.top() == popped[id]) {
                id += 1; St.pop();
            }
        }
        return St.empty();
    }
};