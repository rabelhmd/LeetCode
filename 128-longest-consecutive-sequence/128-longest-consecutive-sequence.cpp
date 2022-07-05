class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        
        sort(nums.begin(), nums.end());
        
        int count = 1, ans = 1;
                         
        for(int i = 1; i < len; i++) {
            while(i < len-1 && nums[i] == nums[i-1]) {
                i += 1;
            }
            if(nums[i] - nums[i-1] == 1) {
                count += 1;
            } else {
                count = 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};