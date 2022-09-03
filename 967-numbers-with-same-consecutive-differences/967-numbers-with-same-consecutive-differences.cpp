class Solution {
public:
    
    void rec(int len, int cur, int digit, int &k, vector <int>& ans) {
        if(len == 0 ) {
            ans.push_back(cur);
            return;
        }
        
        for(int i = 0; i < 10; i++) {
            if(abs(i-digit) == k) {
                rec(len-1, cur*10 + i, i, k, ans);
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector <int> res;
        for(int i = 1; i <= 9; i++) {
            rec(n-1, i, i, k, res);
        }
        return res;
    }
};