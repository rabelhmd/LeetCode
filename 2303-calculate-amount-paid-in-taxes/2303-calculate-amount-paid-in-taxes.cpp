class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if(income == 0) return income;
        double ret = 0.0;
        int prev = 0;
        for(auto& br: brackets) {
            int cur = min(br[0], income);
            ret += ((cur - prev) * br[1] * 1.0) / 100.0;
            if(br[0] >= income) return ret;
            prev = br[0];
        }
        return ret;
    }
};