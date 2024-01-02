class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int ev = 0;
        for(auto &x: nums) ev += (x%2 == 0);
        return ev >= 2;
    }
};