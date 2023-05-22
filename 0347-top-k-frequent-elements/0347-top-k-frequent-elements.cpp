class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        faster();
        unordered_map <int, int> Mp; for(auto &x: nums) Mp[x] += 1;
        
        priority_queue <pair<int, int>> pq;
        for(auto &mp: Mp) pq.push({mp.second, mp.first});
        
        vector<int> ret; while(k-- > 0 and !pq.empty()) {
            ret.push_back(pq.top().second); pq.pop();
        }
        return ret;
    }
};