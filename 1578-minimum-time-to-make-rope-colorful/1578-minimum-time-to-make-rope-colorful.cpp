class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int len = colors.size();
        
        int ret = 0;
        for(int i = 0; i < len-1; i++) {
            if(colors[i] != colors[i+1]) continue;
            if(time[i] < time[i+1]) {
                ret += time[i];
                continue;
            }
            ret += time[i+1];
            time[i+1] = time[i];
        }
        return ret;
    }
};