class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue <int> pq;
        for(auto &x: amount) pq.push(x);
        
        int ret = 0; 
        while(pq.top() != 0) {
            int a = pq.top(); pq.pop(); a -= 1;
            int b = pq.top(); pq.pop(); b -= 1;
            pq.push(a), pq.push(b);
            ret += 1;
        }
        return ret;
    }
};