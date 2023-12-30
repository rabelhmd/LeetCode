class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int Mp[26] = {0}, len = words.size();
        
        for(auto &word: words) {
            for(auto &x: word) {
                Mp[x - 'a'] += 1;
            }
        }
        
        for(auto &x: Mp) {
            if(x % len != 0) return false;
        }
        return true;
    }
};