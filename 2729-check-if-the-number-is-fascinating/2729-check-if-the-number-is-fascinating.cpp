class Solution {
public:
    unordered_map <int, int> Mp;
    unordered_set <int> St;
    int f(int n) {
        int ret = 0;
        while(n) {
            int d = n % 10;
            St.insert(d); Mp[d] += 1;
            n /= 10; ret += 1;
        }
        return ret;
    }
    bool isFascinating(int n) {
        int ret = f(n) + f(2*n) + f(3*n);
        return Mp.find(0) == Mp.end() and St.size() == ret;
    }
};