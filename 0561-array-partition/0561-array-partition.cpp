class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ret = 0; for(int i = 0; i < nums.size(); i++) {
            ret += (i % 2 == 0) ? nums[i] : 0;
        }
        return ret;
    }
};