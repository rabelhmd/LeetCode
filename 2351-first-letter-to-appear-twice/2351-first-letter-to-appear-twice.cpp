class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char, int> Mp;
        for(auto &x: s) {
            if(Mp.find(x) != Mp.end()) {
                return x;
            }
            Mp[x] += 1;
        }
        return 'x';
    }
};