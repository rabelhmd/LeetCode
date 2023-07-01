class Solution {
public:
    
    void rec(int pos, int& len, vector<int>& nums, vector<int>& sum, int& k, int& ret) {
        if(pos == len) {
            int mx = INT_MIN;
            for(int i = 0; i < k; i++) mx = max(mx, sum[i]);
            ret = min(ret, mx);
            return;
        }
        
        for(int i = 0; i < k; i++) {
            sum[i] += nums[pos];
            rec(pos + 1, len, nums, sum, k, ret);
            sum[i] -= nums[pos];
        }
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> sum(k, 0);
        int ret = INT_MAX, len = cookies.size();
        rec(0, len, cookies, sum, k, ret);
        return ret;
    }
};