class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map <int, bool> Mp;
        int ret = -1111;
        for(auto &x: nums) {
            if(x < 0 and Mp.find(-x) != Mp.end()) ret = max(ret, -x);
            else if(x > 0 and Mp.find(-x) != Mp.end()) ret = max(ret, x);
            Mp[x] = true;
        }
        return ret == -1111 ? -1 : ret;
    }
};