class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != mn and nums[i] != mx) return nums[i];
        }
        return -1;
    }
};