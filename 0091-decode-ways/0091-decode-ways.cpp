class Solution {
public:
    vector <int> dp;
    
    int rec(int pos, int &len, string &s) {
        if(pos == len) return 1;
        if(s[pos] == '0') return 0;
        int &ret = dp[pos];
        if(~ret) return ret;
        ret = rec(pos + 1, len, s);
        if(pos < len-1 and (s[pos] == '1' or s[pos] == '2' and s[pos+1] <= '6'))
           ret += rec(pos + 2, len, s);
        return ret;
    }
    
    int numDecodings(string s) {
        int len = s.size();
        dp.resize(len+1, -1);
        return rec(0, len, s);
    }
};