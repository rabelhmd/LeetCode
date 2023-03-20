class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 1, len = nums.size();
        while(j < len) {
            if(nums[i] == nums[j]) {
                j += 1; continue;
            }
            i += 1, j += 1;
        }
        
        return i;
    }
};