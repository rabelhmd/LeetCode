class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < (int) nums.size() - 2; i++) {
            while(i >= 0 && i < (int) nums.size() - 2 && nums[i] == nums[i+1] && nums[i+1] == nums[i+2]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};