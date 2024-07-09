class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait = 0, cur = 0;
        for (auto& c: customers) {
            cur = max(cur, 1.0 * c[0]) + c[1];
            wait += cur - c[0];
        }
        return 1.0 * wait / customers.size();
    }
};