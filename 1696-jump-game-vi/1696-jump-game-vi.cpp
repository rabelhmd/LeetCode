class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int sz = nums.size();
        vector<int> dp(sz, INT_MIN);
        
        multiset<int> s ({ dp[0] = nums[0] });
	    for(int i = 1; i < sz; i++) {
            if(i > k) s.erase(s.find(dp[i - k - 1]));
            s.insert(dp[i] = *rbegin(s) + nums[i]);
        }
	    return dp.back();
    }
};