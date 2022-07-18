class Solution {
public:
    int Mp[5*(int)1e5 + 5];
    
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        for(auto x: nums) if(x > 0 && x <= len) Mp[x] = 1;
        for(int i = 1; i <= len; i++) if(!Mp[i]) return i;
        return len+1;
    }
};