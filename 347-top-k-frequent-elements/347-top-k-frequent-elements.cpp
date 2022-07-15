class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> Mp;
        for(auto x: nums) {
            Mp[x] += 1;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto mp: Mp) {
            pq.push({mp.second, mp.first});
        }
        
        vector <int> v;
        while(!pq.empty()) {
            if(k == 0) break;
            v.push_back(pq.top().second);
            pq.pop();
            k -= 1;
        }
        
        return v;
    }
};