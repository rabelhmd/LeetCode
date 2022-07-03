class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int u = 0, d = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) d = u + 1;
            if(nums[i] > nums[i-1]) u = d + 1;
        }
        return 1 + max(u, d);
    }
};