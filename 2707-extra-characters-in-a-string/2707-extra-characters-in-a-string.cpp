class Solution {
public:
    int rec(string& s, unordered_map<string, int>& Mp, int id, vector<int>& dp) {
        int len = s.size();
        if (id >= len) return 0;
        int& ret = dp[id];
        if(~ret) return ret;
        ret = len;
        string str;
        for (int i = id; i < len; i++) {
            str.push_back(s[i]);
            int currExtra = (Mp.count(str)) ? 0 : str.size();
            int nextExtra = rec(s, Mp, i + 1, dp);
            int totalExtra = currExtra + nextExtra;
            ret = min(ret, totalExtra);
        }
        return ret;
    }
    
    int minExtraChar(string s, vector<string>& dictionary)  {
        vector <int> dp(s.size(), -1);
        unordered_map<string, int> Mp;
        for (string& w : dictionary) Mp[w]++;
        return rec(s, Mp, 0, dp);
    }
};