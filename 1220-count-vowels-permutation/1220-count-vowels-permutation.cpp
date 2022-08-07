class Solution {
public:
    
    int MOD = (int) (1e9 + 7);
    int dp[2*(int)1e4+5][10];
    
    int solve(int item, int pos) {
        if(item == 0) return 1;
        int &ret = dp[item][pos];
        if(~ret) return ret;
        ret = 0;
        if(pos == 5) {
            for(int i = 0; i < 5; i++)
                ret = (ret + solve(item-1, i)) % MOD;
            return ret;
        }
        
        if(pos == 0) return ret = (ret + solve(item-1, 1)) % MOD;
        if(pos == 1) {
            ret = (ret + solve(item-1, 0)) % MOD;
            ret = (ret + solve(item-1, 2)) % MOD;
            return ret;
        }
        if(pos == 2) {
            ret = (ret + solve(item-1, 0)) % MOD;
            ret = (ret + solve(item-1, 1)) % MOD;
            ret = (ret + solve(item-1, 3)) % MOD;
            ret = (ret + solve(item-1, 4)) % MOD;
            return ret;
        }
        if(pos == 3) {
            ret = (ret + solve(item-1, 2)) % MOD;
            ret = (ret + solve(item-1, 4)) % MOD;
            return ret;
        }
        if(pos == 4) {
            ret = (ret + solve(item-1, 0)) % MOD;
            return ret;
        }
        return ret;
    }
    
    int countVowelPermutation(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(n, 5);
    }
};