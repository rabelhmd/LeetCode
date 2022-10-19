class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string, int> Mp;
        for(auto w: words) Mp[w] += 1;
        priority_queue<int> pq;
        for(auto [_, val]: Mp) pq.push(val);
        
        vector<string> ret;
        while(!pq.empty()) {
            int top = pq.top(); pq.pop();
            for(auto [key, v] : Mp) {
                if(top == v) {
                    ret.push_back(key);
                    Mp[key] = -1;
                    k -= 1;
                    if(k == 0) {
                        return ret;
                    }
                }
            }
        }
        return ret;
    }
};