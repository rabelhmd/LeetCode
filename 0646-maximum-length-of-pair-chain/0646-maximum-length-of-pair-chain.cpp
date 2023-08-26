class Solution {
public:
    
    static bool cmp(vector<int>& a, vector<int>&b) {
        return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), cmp);
        
        int ret = 0;
        vector<int>& p = pairs[0];
        for (int i = 0; i < pairs.size(); i++) {
            if (i == 0 || pairs[i][0] > p[1]) {
                p = pairs[i];
                ret++;
            }
        }
        return ret;
    }
};