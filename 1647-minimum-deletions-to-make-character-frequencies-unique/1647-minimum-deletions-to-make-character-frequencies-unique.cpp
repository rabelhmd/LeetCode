class Solution {
public:
    
    priority_queue<int> makePQ(string s) {
        unordered_map <char, int> Mp;
        for(auto &c: s) Mp[c] += 1;
        priority_queue<int> pq;
        for(auto [k, v]: Mp) pq.push(v);
        return pq;
    }
    
    int minDeletions(string s) {
        priority_queue<int> pq = makePQ(s);
        int ret = 0, len = pq.size();
        
        while(len) {
            int first = pq.top(); 
            pq.pop(); 
            len--;
            if(first <= 0 || len <= 0) return ret;
            if(first == pq.top()) {
                ret += 1;
                pq.push(first-1);
                len += 1;
            }
        }
        return ret;
    }
};