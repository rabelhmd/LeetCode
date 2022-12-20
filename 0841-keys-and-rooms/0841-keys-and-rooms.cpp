class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size();
        vector<bool> seen(len, false); queue <int> q;
        q.push(0); seen[0] = true;
        while(!q.empty()) {
            int size = q.size();
            while(size-- > 0) {
                int room = q.front(); q.pop();
                seen[room] = true;
                for(int ele: rooms[room]) {
                    if(!seen[ele]) q.push(ele);
                }
            }
        }
        return count(seen.begin(), seen.end(), true) == len;
    }
};