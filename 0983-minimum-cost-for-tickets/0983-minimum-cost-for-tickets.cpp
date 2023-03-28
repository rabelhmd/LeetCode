class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        queue<pair<int, int>> last7, last30;
        int cost = 0;
        
        for(auto& d: days) {
            while(!last7.empty() and last7.front().first + 7 <= d) last7.pop();
            while(!last30.empty() and last30.front().first + 30 <= d) last30.pop();
            
            last7.push({d, cost + costs[1]});
            last30.push({d, cost + costs[2]});
            
            int x = cost + costs[0];
            int& y = last7.front().second;
            int& z =  last30.front().second;
            cost = min({x, y, z});
        }
        return cost;
    }
};