class Solution {
public:
    
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, bool> Mp;
        for(auto &x: nums) if(x > 0 && x <= len) Mp[x] = true;
        for(int i = 1; i <= len; i++) if(!Mp[i]) return i;
        return len+1;
    }
};