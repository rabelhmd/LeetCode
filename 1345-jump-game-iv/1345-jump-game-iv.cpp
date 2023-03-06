class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int, vector<int>> Mp;
        
        int len = arr.size();
        for (int i = 0; i < len; i++) Mp[arr[i]].push_back(i);
        
        queue<int> q; q.push(0);
        
        vector<bool> visited(len);
        visited[0] = true;
        
        int ret = 0;
        while (!q.empty()) {
            int sz = q.size();
            while (sz-- > 0) {
                int fr = q.front(); q.pop();
                if (fr == len-1) return ret;
                
                if (fr+1 < len && !visited[fr+1]) {
                    q.push(fr+1);
                    visited[fr+1] = true;
                }
                
                if (fr-1 >= 0 && !visited[fr-1]) {
                    q.push(fr-1);
                    visited[fr-1] = true;
                }
                
                for (int j: Mp[arr[fr]]) {
                    if (!visited[j]) {
                        q.push(j);
                        visited[j] = true;
                    }
                }
                Mp[arr[fr]].clear();
            }
            ret += 1;
        }
        return -1;
    }
};