class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        vector <int> ret(n+3, 0);
        ret[1] = ret[2] = 1;
        for(int i = 3; i <= n; i++) ret[i] = ret[i-1] + ret[i-2] + ret[i-3];
        return ret[n];
    }
};