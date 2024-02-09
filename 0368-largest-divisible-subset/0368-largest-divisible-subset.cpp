class Solution {
public:
    vector<int> ret;
    vector<int> dp;
    
    void rec(vector<int> temp,int i,int prev,vector<int>& nums) {
        if(i >= nums.size()) {
            if(temp.size() > ret.size()) ret = temp;
            return;
        }
        
        if((int)temp.size() > dp[i] && (nums[i] % prev == 0)) { 
            dp[i] = temp.size();
            temp.push_back(nums[i]);
            rec(temp,i+1, nums[i], nums);
            temp.pop_back();
        }
        rec(temp, i+1, prev, nums);
    }
    
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i <= nums.size(); i++) dp.push_back(-1);
        vector<int> temp;
        rec(temp, 0, 1, nums);
        return ret;
    }
};