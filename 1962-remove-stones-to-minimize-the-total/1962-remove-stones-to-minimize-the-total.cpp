class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue <int> pq;
        for(auto &p: piles) pq.push(p);
        
        while(k-- > 0) {
            int cur = pq.top(); pq.pop();
            pq.push(cur - (cur/2));
        }
        
        int ret = 0;
        while(!pq.empty()) ret += pq.top(), pq.pop();
        return ret;
    }
};