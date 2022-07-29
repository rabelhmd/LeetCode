class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3) {
            return nums.size();
        }
        
        for(int i = 0; i + 2 < nums.size(); i++) {
            
            while(i >= 0 && i + 2 < nums.size() && nums[i] == nums[i+1] && nums[i+1] == nums[i+2]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};