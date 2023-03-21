class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, ret = 0;
        for(int &x: nums) {
            if(x != 0) {
                count = 0;
                continue;
            }
            count += 1;
            ret += count;
        }
        return ret;
    }
};