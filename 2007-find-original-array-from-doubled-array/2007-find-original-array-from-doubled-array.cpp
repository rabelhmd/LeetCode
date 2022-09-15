class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2) return {};
        unordered_map <int, int> Mp;
        for(auto &x: changed) Mp[x] += 1;
        
        vector<int> res;
        sort(changed.begin(), changed.end());
        for(auto &x: changed) {
            if(Mp[x] <= 0) continue;
            if(Mp[x*2] <= 0) return {};
            Mp[x] -= 1; Mp[x*2] -= 1;
            res.push_back(x);
        }
        return res;
    }
};