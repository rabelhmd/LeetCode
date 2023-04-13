class Solution {
public:
    bool primes[4000001] =  { true, true }; 
    void buildSieve() {
        for (int p = 2; p * p < 400001; ++p)
            if (!primes[p])
                for (int i = p * p; i < 400001; i += p)
                    primes[i] = true;
    }    
    
    int diagonalPrime(vector<vector<int>>& nums) {
        if(!primes[4]) buildSieve();
        
        int ret = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            int &a = nums[i][i];
            if(a > ret and !primes[a]) {
                ret = a;
            }
            int &b = nums[i][n-1-i];
            if(b > ret and !primes[b]) {
                ret = b;
            }
        }
        return ret;
    }
};