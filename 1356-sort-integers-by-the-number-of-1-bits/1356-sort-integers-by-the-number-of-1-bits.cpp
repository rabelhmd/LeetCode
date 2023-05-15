class Solution {
public:
    static bool cmp(const int& a, const int& b) { 
        int x = __builtin_popcount(a);
        int y = __builtin_popcount(b);
        if(x != y)
            return x < y;
        return a < b;
    } 
    
    vector<int> sortByBits(vector<int>& ret) {
        sort(ret.begin(), ret.end(), cmp);
        return ret;
    }
};