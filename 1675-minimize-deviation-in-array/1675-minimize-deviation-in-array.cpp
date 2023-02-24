class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mn = INT_MAX, ret = mn;
        priority_queue <int> pq;
        for(auto &x: nums) {
            if(x&1) x *= 2;
            pq.push(x), mn = min(mn, x);
        }
        
        while(!pq.empty()) {
            int top = pq.top(); pq.pop();
            ret = min(ret, top - mn);
            if(top&1) return ret;
            top /= 2, mn = min(mn, top), pq.push(top);
        }
        return ret;
    }
};