class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        int mx = 0;
        for(auto &x: candies) mx = max(mx, x);
        vector <bool> ret;
        for(auto &x: candies) ret.push_back(x + ex >= mx);
        return ret;
    }
};