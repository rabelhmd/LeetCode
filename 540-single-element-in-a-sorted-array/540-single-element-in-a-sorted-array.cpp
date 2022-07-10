class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len == 1) return nums[0];
        
        int l = 0, r = len-1, mid, n;
        while(l < r) {
            mid = l + (r-l) / 2;
            n = mid % 2 == 0 ? mid + 1 : mid - 1;
            if(nums[mid] == nums[n]) l = mid + 1;
            else r = mid;
        }
        return nums[l];
    }
};