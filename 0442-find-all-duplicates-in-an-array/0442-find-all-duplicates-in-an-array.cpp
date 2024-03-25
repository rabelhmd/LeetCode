class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> Mp;
        for(auto &x: nums) Mp[x] += 1;
        vector <int> ret;
        for(auto [k, v]: Mp) if(v == 2) ret.push_back(k);
        return ret;
    }
};