class Solution {
public:
    int numSquares(int n) {
        vector<int> v(n+1, (1<<30)-1);
        v[0] = 0;
        for(int i = 1; i <= 100 && i*i <= n; i++) {
            for(int j = i*i; j <= n; j++) {
                v[j] = min(v[j], v[j-i*i] + 1);
            }
        }
        return v[n];
    }
};