class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map <int, int> Mp;
        for(auto &v: items1) {
            Mp[v[0]] += v[1];
        }
        
        for(auto &v: items2) {
            Mp[v[0]] += v[1];
        }
        
        vector<vector<int>> ret;
        for(auto mp: Mp) {
            ret.push_back({mp.first, mp.second});
        }
        return ret;
    }
};