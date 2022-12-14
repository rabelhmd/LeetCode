class Solution {
public:
    vector <int> dp;
    int rob(vector<int>& nums, int pos = 0) {
        if(pos == 0) dp.resize(100, -1);
        if(pos >= nums.size()) return 0;
        
        int &ret = dp[pos];
        if(~ret) return ret;
        int step1 = rob(nums, pos + 1);
        int step2 = rob(nums, pos + 2);
        return ret = max(step1, nums[pos] + step2);
    }
};