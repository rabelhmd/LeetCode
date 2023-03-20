class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        long long lo = 1, hi = 2e9, ret;
        long long ab = lcm(a, b), ac = lcm(a, c), bc = lcm(b, c), abc = lcm(a, lcm(b, c));
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long count = mid / a + mid / b + mid / c - mid / ab - mid / ac - mid / bc + mid / abc;
            if (count >= n) {
                ret = mid;
                hi = mid - 1;
                continue;
            }
            lo = mid + 1;
        }
        return ret;
    }
    
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }
};