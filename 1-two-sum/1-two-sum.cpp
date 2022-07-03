class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> Mp;
        for(int i = 0; i < nums.size(); i++) {
            int a = target - nums[i];
            if(Mp.find(a) != Mp.end()) {  
                return {Mp[a], i};
            }
            Mp[nums[i]] = i;   
        }
        return {};
    }
};