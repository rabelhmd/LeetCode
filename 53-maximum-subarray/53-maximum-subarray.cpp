class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, mx = INT_MIN;
        
        for(auto x: nums) {
            sum += x;
            if(sum < 0) sum = 0;
            mx = max(sum, mx);
        }
        
        if(mx == 0) {
            sort(nums.rbegin(), nums.rend());
            return nums[0];
        }
        return mx;
    }
};