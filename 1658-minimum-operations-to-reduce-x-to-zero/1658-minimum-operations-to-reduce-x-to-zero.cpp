class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum = accumulate(begin(nums), end(nums), 0);
        long long cur = 0;
        sum -= x;
        if(sum < 0) return -1;
        
        int r = 0, l = 0, len = nums.size(), ret = -1;
        while(r < len) {
            cur += nums[r++];
            while(cur > sum) cur -= nums[l++];
            if(cur == sum) ret = max(ret, r - l);
        }
        if(ret == -1) return ret;
        return len - ret;
        
    }
};