class Solution {
public:
    vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    
    int minSteps(int n) {
        if(n <= 5) return n == 1 ? 0 : n;
        for(auto &p: primes) {
            if(n % p == 0) return p + minSteps(n/p);
        }
        return n;
    }
};