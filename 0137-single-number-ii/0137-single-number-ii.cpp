class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto& x: nums) Mp[x] += 1;
        for(auto [key, val]: Mp) if(val == 1) return key; 
        return 0;
    }
};