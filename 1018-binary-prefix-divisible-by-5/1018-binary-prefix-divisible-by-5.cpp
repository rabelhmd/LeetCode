class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ret; int x = 0;
        for(auto &n: nums) {
            x = ((x * 2) + n) % 5;
            ret.push_back(!x);
        }
        return ret;
    }
};