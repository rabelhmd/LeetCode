class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> pq1, pq2;

        int count = 0, l = 0, r = costs.size()-1;
        long long ret = 0;
        while(count++ < k) {
            while(pq1.size() < candidates && l <= r) {
                pq1.push(costs[l++]);
            }
            while(pq2.size() < candidates && r >= l) {
                pq2.push(costs[r--]);
            }

            int c1 = pq1.size() > 0 ? pq1.top() : INT_MAX;
            int c2 = pq2.size() > 0 ? pq2.top() : INT_MAX;
            if(c1 <= c2) {
               ret += c1;
               pq1.pop();
            }
            else {
              ret += c2;
              pq2.pop();
            }
        }
        return ret;
    }
};