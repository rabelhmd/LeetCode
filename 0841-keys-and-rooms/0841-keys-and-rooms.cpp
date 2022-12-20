class Solution {
public:
    void dfs(int start, int &ret, vector <int>& seen, vector<vector<int>>& rooms) {
        seen[start] = true; ret += 1;
        for(auto &room: rooms[start]) {
            if(!seen[room]) dfs(room, ret, seen, rooms);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size(), ret = 0;
        vector <int> seen(len, false);
        dfs(0, ret, seen, rooms);
        return ret == len;
    }
};