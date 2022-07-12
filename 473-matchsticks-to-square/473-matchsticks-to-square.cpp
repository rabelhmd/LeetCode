class Solution {
public:
    
    bool backTrack(int id, vector<int>& s, int &len, vector<int>& cur) {
        if(id == len) {
            for(int i = 1; i < 4; i++)
                if(cur[i] != cur[i-1]) return false;
            return true;
        }
        
        if(s[id] <= cur[0]){
            cur[0] -= s[id];
            if(backTrack(id+1, s, len, cur)) return true;
            cur[0] += s[id];      // backtrack step
        }
        
        if(s[id] <= cur[1]){
            cur[1] -= s[id];
            if(backTrack(id+1, s, len, cur)) return true;
            cur[1] += s[id];      // backtrack step
        }
        
        if(s[id] <= cur[2]){
            cur[2] -= s[id];
            if(backTrack(id+1, s, len, cur)) return true;
            cur[2] += s[id];      // backtrack step
        }
        
        if(s[id] <= cur[3]){
            cur[3] -= s[id];
            if(backTrack(id+1, s, len, cur)) return true;
            cur[3] += s[id];      // backtrack step
        }
        
        return false;
    }
    
    bool makesquare(vector<int>& s) {
        if(s.size() < 4) return false;
        int sum = 0, len = s.size();
        for(auto x: s) sum += x;
        if(sum % 4) return false;
        vector<int> cur(4, sum/4);
        sort(s.rbegin(), s.rend());
        return backTrack(0, s, len, cur);
    }
};