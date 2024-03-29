class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int mx = *max_element(nums.begin(),nums.end());
        
        long long int left = 0,right = 0, ret = 0, count = 0, len = nums.size();
        
        while(right < len) {
            if(nums[right] == mx) count++;
            while(count >= k) {
                if(nums[left++] == mx) count--;
                ret += len - right;
            }
            right++;
        }
        return ret;
    }
};