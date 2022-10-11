class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX;
        for(auto &x: nums) {
            if(a >= x) {
                a = x;
                continue;
            }
            if(b >= x) {
                b = x;
                continue;
            }
            return true;
        }
        return false;
    }
};