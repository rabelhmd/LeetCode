class Solution {
public:
    int sumBase(int n, int k) {
        if(n == 0) return 0;
        return n%k + sumBase(n/k, k);
    }
};