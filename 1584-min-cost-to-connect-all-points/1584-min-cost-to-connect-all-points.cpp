class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& ps) {
        priority_queue<pair<int, int>> pq;
        int len = ps.size(), ret = 0, i = 0, connected = 0;
        vector<bool> visited(len);
        while (++connected < len) {
            visited[i] = true;
            for (int j = 0; j < len; ++j) {
                if (!visited[j]) {
                    pq.push({-(abs(ps[i][0] - ps[j][0]) + abs(ps[i][1] - ps[j][1])), j});
                }
            }
            while (visited[pq.top().second]) pq.pop();
            ret -= pq.top().first;
            i = pq.top().second;
            pq.pop();
        }
        return ret;
    }
};