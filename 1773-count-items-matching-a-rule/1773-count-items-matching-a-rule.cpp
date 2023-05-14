class Solution {
public:
    int getPos(char ch) {
        if(ch == 't') return 0;
        else if(ch == 'c') return 1;
        return 2;
    }
    
    int countMatches(vector<vector<string>>& items, string key, string target) {
        int ret = 0, pos = getPos(key[0]);
        for(auto &item: items) {
            if(target == item[pos]) ret += 1;
        }
        return ret;
    }
};