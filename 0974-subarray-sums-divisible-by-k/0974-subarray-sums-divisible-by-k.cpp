class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ret = 0, sum = 0, rem = 0;
        unordered_map <int, int> Mp;
        Mp[rem] = 1;
        
        for(auto &x: nums) {
            sum += x, rem = sum % k;
            if(rem < 0) rem += k;
            
            if(Mp.find(rem) != Mp.end()) ret += Mp[rem];
            Mp[rem] += 1;
        }
        return ret;
    }
};