class Solution {
public:
    vector<int> convert(int& len, vector<int>& nums) {
        int mx = nums[0];
        
        vector<int> ret(len);
        ret[0] = mx;
        for (int i = 1; i < len; i++) {
            mx = max(mx, nums[i]);
            ret[i] = nums[i] + mx;
        }
        return ret;
    }
    
    vector<long long> prefix(int &len, vector<int>& nums) {        
        vector<long long> ret(len);
        long long sum = nums[0];
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            ret[i] = sum;
        }
        return ret;
    }
    
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector <int> v = convert(n, nums);
        return prefix(n, v);
    }
};