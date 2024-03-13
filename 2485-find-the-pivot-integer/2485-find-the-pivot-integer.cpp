class Solution {
public:
    int pivotInteger(int n) {
        double sq = sqrt(n * (n + 1)/2);
        int x = sq;
        return x == sq ? x : -1;
    }
};