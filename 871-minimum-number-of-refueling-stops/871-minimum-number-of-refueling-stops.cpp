class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int len = stations.size();
        int cur = startFuel, id = 0, count = 0;
        
        priority_queue<int> pq; 
        while(cur < target) { //until reach target
            
            while(id < len && cur >= stations[id][0]) {
                pq.push(stations[id][1]);
                id++;
            }
            
            if(pq.empty()) return -1;
            int dist = pq.top();
            pq.pop();
            cur += dist;
            count++;
        }
        return count;
    }
};