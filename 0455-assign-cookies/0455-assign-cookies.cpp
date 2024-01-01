class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gLen = g.size(), sLen = s.size();
        int ret = 0, mx = max(sLen - gLen, 0);
        for(int i = mx; i < sLen and ret < sLen; i++) {
            if(s[i] >= g[ret]) ret += 1;
        }
        return ret;
    }
};