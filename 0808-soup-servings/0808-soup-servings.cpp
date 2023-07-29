class Solution {
private:
    unordered_map<int, unordered_map<int, double>> dp;
public:
    double rec(int A, int B) {
        if(A == 0) return B != 0 ? 1.0 : 0.5;
        if (A != 0 && B == 0) return 0.0;
        if(dp[A][B] != 0) return dp[A][B];
        double prob = 0;
        prob += 0.25 * rec(A - min(A, 100), B);
        prob += 0.25 * rec(A - min(A, 75), B - min(B, 25));
        prob += 0.25 * rec(A - min(A, 50), B - min(B, 50));
        prob += 0.25 * rec(A - min(A, 25), B - min(B, 75));				
        dp[A][B] = prob;
        return prob;
    }
    
    double soupServings(int N) {
        if (N >= 5000) return 1.0;
        return rec(N, N);
    }
};