class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f = nums[0];
        int l = 0, r = nums.size()-1, m, ret = -1;
        while(l <= r) {
            m = l + (r-l) / 2;
            if(f <= nums[m]) l = m+1, ret = m;
            else r = m-1;
        }
        
        l = 0, r = ret;
        while(l <= r) {
            m = l + (r-l) / 2;
            if(nums[m] == target) return m;
            if(nums[m] < target) l = m+1;
            else r = m-1;
        }
        
        l = ret+1, r = nums.size()-1;
        while(l <= r) {
            m = l + (r-l) / 2;
            if(nums[m] == target) return m;
            if(nums[m] < target) l = m+1;
            else r = m-1;
        }
        return -1;
    }
};