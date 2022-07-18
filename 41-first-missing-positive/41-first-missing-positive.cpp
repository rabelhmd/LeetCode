class Solution {
public:
    unordered_map<int, bool> Mp;
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        
        for(auto x: nums) {
            if(x > 0 && x <= len) Mp[x] = true;
        }
        
        for(int i = 1; i <= len; i++) if(!Mp[i]) return i;
        return len+1;
    }
};