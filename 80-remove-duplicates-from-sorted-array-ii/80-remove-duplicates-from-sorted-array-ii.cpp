class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> Mp;
        for(auto& x: nums) Mp[x] += 1;
        nums.clear();
        for(auto it: Mp) {
            nums.push_back(it.first);
            if(it.second >= 2) {
                nums.push_back(it.first);
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};