class Solution {
public:
    int minTimeToType(string w) {
        int ret = min(w[0]-'a', 26 - (w[0]-'a')), len = w.size();
        for(int i = 1; i < len; i++) {
            int cur = abs(w[i]-w[i-1]);
            ret += min(cur, 26-cur);
        }
        return ret+len;
    }
};

