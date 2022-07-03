class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> Mp;
        for(int i = 0; i < nums.size(); i++) {
            if(Mp.find(target - nums[i]) != Mp.end()) {  
                return {Mp[target - nums[i]], i};
            }
            Mp[nums[i]] = i;   
        }
        return {};
    }
};