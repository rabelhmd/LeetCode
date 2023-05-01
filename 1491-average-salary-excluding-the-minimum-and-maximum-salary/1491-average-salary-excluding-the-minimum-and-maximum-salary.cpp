class Solution {
public:
    double average(vector<int>& salary) {
        int mx = 0, mn = INT_MAX;
        double sum = 0.0, n = salary.size()-2;
        for(auto &x: salary) {
            mx = max(mx, x);
            mn = min(mn, x);
            sum += x;
        }
        sum -= (mx + mn);
        return sum / n;
    }
};