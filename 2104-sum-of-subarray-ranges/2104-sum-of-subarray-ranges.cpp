class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int len = nums.size();
        if(len <= 0) return 0;
        
        long long sum = 0;
        for(int i = 0; i < len; i++) {
            int mn = INT_MAX;
            int mx = INT_MIN;
            for(int j = i; j < len; j++) {
                mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);
                sum += (mx-mn);
            }
        }
        return sum;
    }
};