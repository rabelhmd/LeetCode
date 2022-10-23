class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            while(nums[i] != nums[nums[i]-1]) {
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        
        for(int i = 0; i < len; i++) {
            if(nums[i] != i+1) {
                return {nums[i], i + 1};
            }
        }
        return {0, 0};
    }
};