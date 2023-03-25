class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend());
        
        int ret = 0, len = cost.size();
        for(int i = 0; i < len; i += 3) {
            ret += cost[i];
            if(i + 1 < len) ret += cost[i+1];
        }
        return ret;
    }
};