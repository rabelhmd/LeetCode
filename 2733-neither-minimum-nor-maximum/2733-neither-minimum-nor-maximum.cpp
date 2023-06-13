class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            mn = min(mn, nums[i]), mx = max(mx, nums[i]);
        }
        for(int i = 0; i < nums.size(); i++) {
            if(mn != nums[i] and mx != nums[i]) return nums[i];
        }
        return -1;
    }
};