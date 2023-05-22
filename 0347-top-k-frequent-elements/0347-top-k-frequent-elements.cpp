class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    bool static cmp(pair<int, int> p, pair<int, int> q) {
        return p.second > q.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        faster();
        sort(nums.begin(), nums.end());
        int count = 1, len = nums.size();
        vector <pair<int, int>> Mp;
        
        for(int i = 1; i < len; i++) {
            if(nums[i] == nums[i-1]) {
                count += 1;
                continue;
            }
            Mp.push_back(make_pair(nums[i-1], count));
            count = 1;
        }
        Mp.push_back(make_pair(nums[len-1], count));
        sort(Mp.begin(), Mp.end(), cmp);
        
        vector <int> ret; for(int i = 0; i < k; i++) {
            ret.push_back(Mp[i].first);
        }
        return ret;
    }
};