class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> Mp;
        for(auto x: deck) {
            Mp[x] += 1;
        }
        
        int mx = 0;
        for(auto mp: Mp) {
           mx = __gcd(mx, mp.second); 
        }
        return mx >= 2;
    }
};