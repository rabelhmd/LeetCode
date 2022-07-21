class Solution {
public:
    
    int dp[2505][2505];
    
    int LIS(vector<int>& v, int cur, int last) {
        if(cur >= v.size()) return 0;
        
        int &ret = dp[cur][last];
        if(ret != -1) return ret;
        ret = max(ret, LIS(v, cur + 1, last));
        if(v[cur] > v[last]) {
            ret = max(ret, 1 + LIS(v, cur + 1, cur));
        }
        return ret;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        vector <int> v;
        v.push_back(INT_MIN);
        for(auto x: nums) v.push_back(x);
        return LIS(v, 1, 0);
    }
};