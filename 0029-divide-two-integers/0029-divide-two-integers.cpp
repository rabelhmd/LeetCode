class Solution {
public:
    const int mx = 2147483647;
    
    int divide(int dividend, int divisor) {
        long long div = (long long) dividend/divisor;
        return div > mx ? mx : div;
    }
};