class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    bool static cmp(pair<int, int> &p, pair<int, int> &q) {
        return p.second > q.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        faster();
        unordered_map <int, int> Mp;
        for(int &x: nums) Mp[x] += 1;
        
        vector <pair<int, int>> freq;
        for(auto &mp: Mp) freq.push_back({mp.first, mp.second});
        sort(freq.begin(), freq.end(), cmp);
        
        vector <int> ret(k);
        for(int i = 0; i < k; i++) {
            ret[i] = freq[i].first;
        }
        return ret;
    }
};