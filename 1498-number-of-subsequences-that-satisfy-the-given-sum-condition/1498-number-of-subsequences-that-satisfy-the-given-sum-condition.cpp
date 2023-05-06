class Solution {
public:
    int mod = 1000000007;
    int numSubseq(vector<int>& nums, int target) {
        int l = 0, len = nums.size(), r = len-1, ret = 0;
        vector <int> pows(len+1, 1);
        for(int i=1; i <= len; i++) {
            pows[i] = (pows[i-1] * 2) % mod;
        }
        
        sort(nums.begin(), nums.end());
        while(l <= r) {
            if(nums[l] + nums[r] > target) r -= 1;
            else ret = (ret + pows[r-l++]) % mod;
        }
        return ret;
    }
};