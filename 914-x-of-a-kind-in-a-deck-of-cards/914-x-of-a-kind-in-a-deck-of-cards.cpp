class Solution {
public:
    
    int GCD(int x, int y) {
        if(y != 0) return GCD(y, x % y);
        return x;
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> Mp;
        for(auto x: deck) {
            Mp[x] += 1;
        }
        
        int mx = 0;
        for(auto mp: Mp) {
           mx = GCD(mx, mp.second); 
        }
        return mx >= 2;
    }
};