class Solution {
public:
    
    void dfs(vector<vector<int>>& ret, vector<int>& seq, vector<int>& nums, int pos) {
        if(seq.size() > 1) ret.push_back(seq);
        unordered_set<int> hash;
        for(int i = pos; i < nums.size(); ++i) {
            if((seq.empty() || nums[i] >= seq.back()) && hash.find(nums[i]) == hash.end()) {
                seq.push_back(nums[i]);
                dfs(ret, seq, nums, i + 1);
                seq.pop_back();
                hash.insert(nums[i]);
            }
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ret; vector<int> seq;
        dfs(ret, seq, nums, 0);
        return ret;
    }
};