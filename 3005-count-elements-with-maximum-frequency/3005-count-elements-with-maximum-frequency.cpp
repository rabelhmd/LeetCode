class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mx = 0, ret = 0, fr[105];
        for(auto &x: nums) fr[x] += 1, mx = max(mx, fr[x]);
        for(auto &x: nums) if(fr[x] == mx) ret += mx, fr[x] = -1;
        return ret;
    }
};