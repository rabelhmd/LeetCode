class Solution {
public:
    
    int dp[8][16384] = {};
    int len, half;
    
    int rec(vector<int>& nums, int cur, int mask) {
        if (cur > half) return 0;
        int &ret = dp[cur][mask];
        if(ret) return ret;
        
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                int m = (1 << i) + (1 << j);
                if ((mask & m) == 0) {
                    int r = rec(nums, cur + 1, mask + m);
                    int g = __gcd(nums[i], nums[j]);
                    int now = (cur * g) + r;
                    ret = max(ret, now);
                }
            }
        }
        return ret;
    }
    
    int maxScore(vector<int>& nums) {
        len = nums.size();
        half = len / 2;
        return rec(nums, 1, 0);
    }
};