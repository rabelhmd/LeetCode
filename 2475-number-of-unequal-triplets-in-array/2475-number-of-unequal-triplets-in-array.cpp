class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int len = nums.size(), ret = 0;
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                if(nums[i] == nums[j]) continue;
                for(int k = j + 1; k < len; k++)
                    ret += (nums[k] != nums[i] and nums[k] != nums[j]);
            }
        }
        return ret;
    }
};