class Solution {
public:
    int countTestedDevices(vector<int>& bat) {
        int ret = 0;
        for(auto &x: bat) ret += (x > ret) ? 1 : 0;
        return ret;
    }
};