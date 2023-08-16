class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ret = 0;
        for(auto &h: hours) ret += h >= target;
        return ret;
    }
};