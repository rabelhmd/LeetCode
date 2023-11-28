class Solution {
public:
    int mod = 1e9 + 7;
    int numberOfWays(string corridor) {
        vector <int> p;
        for(int i = 0; i < corridor.size(); i++) {
            if(corridor[i] == 'S') p.push_back(i);
        }
        long ret = 1, len = p.size();
        if(len == 0 || len & 1) return 0;
        
        int prev = p[1];
        for (int i = 2; i < len; i += 2) {
            int cur = p[i] - prev;
            ret = (ret * cur) % mod;
            prev = p[i + 1];
        }
        return ret;
    }
};