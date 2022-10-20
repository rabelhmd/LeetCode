class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, l = 0;
        for(auto &x: nums) sum += x;
        for(int i = 0; i < nums.size(); i++) {
            if(2 * l == sum - nums[i]) return i;
            l += nums[i];
        }
        return -1;
    }
};