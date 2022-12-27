class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additional) {
        int len = capacity.size(), ret = 0;
        
        for(int i = 0; i < len; i++) capacity[i] -= rocks[i];
        
        sort(capacity.begin(), capacity.end());
        for(int i = 0; i < len && capacity[i] <= additional; i++) {
            ret += 1, additional -= capacity[i];
        }
        return ret;
    }
};