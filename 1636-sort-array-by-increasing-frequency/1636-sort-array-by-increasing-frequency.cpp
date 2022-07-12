class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto x: nums) Mp[x] += 1;
        vector<int> v;
        priority_queue<pair<int, int>> pq;
        for(auto mp: Mp) pq.push({-mp.second, mp.first});
        
        while(!pq.empty()) {
            auto top = pq.top(); pq.pop();
            top.first = -top.first;
            while(top.first) {
                v.push_back(top.second);
                top.first -= 1;
            }
        }
        
        return v;
    }
};