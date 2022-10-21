class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> Mp;
        
        for(int i = 0; i < nums.size(); i++) {
            if(Mp.find(nums[i]) == Mp.end()) {
                Mp[nums[i]] = i;
                continue;
            }
            if(i - Mp[nums[i]] <= k) return true;
            Mp[nums[i]] = i;
        }
        return false;
    }
};