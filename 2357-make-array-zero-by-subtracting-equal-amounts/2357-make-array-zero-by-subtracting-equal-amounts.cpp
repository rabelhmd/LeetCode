class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int mn = 0, ret = 0;
        priority_queue<int> hp;
        for(auto &x: nums) {
            if(x) mn = min(x, mn), hp.push(-x);
        }
        
        while(!hp.empty()) {
            int top = -hp.top();
            ret += 1;
            priority_queue<int> temp = hp, ex;
            while (!temp.empty()) {
                int minus = -temp.top() - top;
                if(minus != 0) {
                    ex.push(-minus);
                }
                temp.pop();
            }
            hp = ex;
        }
        return ret;
    }
};