class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> p, q;
        int d, ret = 0;
        string str = to_string(num);
        for(auto &c: str) {
            d = c - '0';
            d&1 ? p.push(d) : q.push(d);
        }
        
        for(auto &c: str) {
            d = c - '0', ret *= 10;
            if(d&1)
                ret += p.top(), p.pop();
            else 
                ret += q.top(), q.pop();
        }
        return ret;
    }
};