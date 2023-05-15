class Solution {
public:
    static bool cmp(const int& a, const int& b) { 
        int x = bitset<32>(a).count();
        int y = bitset<32>(b).count();
        if(x != y)
            return x < y;
        return a < b;
    } 
    
    vector<int> sortByBits(vector<int>& ret) {
        sort(ret.begin(), ret.end(), cmp);
        return ret;
    }
};