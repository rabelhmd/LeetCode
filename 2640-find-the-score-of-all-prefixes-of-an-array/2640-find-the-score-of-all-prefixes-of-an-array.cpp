class Solution {
public:
    vector<int> convert(vector<int>& nums) {
        int mx = nums[0], len = nums.size();
        
        vector<int> ret(len);
        ret[0] = mx;
        for (int i = 1; i < len; i++) {
            mx = max(mx, nums[i]);
            ret[i] = nums[i] + mx;
        }
        return ret;
    }
    
    vector<long long> prefix(vector<int>& nums) {
        int len = nums.size();
        
        vector<long long> ret(len);
        long long sum = nums[0];
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            ret[i] = sum;
        }
        return ret;
    }
    
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector <int> v = convert(nums);
        return prefix(v);
    }
};