class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto &c: nums) {
            if(c&1) continue;
            Mp[c] += 1;
        }
        priority_queue <pair<int,int>> pq;
        for(auto mp: Mp) {
            pq.push({mp.second, -mp.first});
        }
        if(pq.empty()) pq.push({1, 1});
        return -pq.top().second;
    }
};