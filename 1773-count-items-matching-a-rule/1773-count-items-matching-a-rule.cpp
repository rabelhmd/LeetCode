class Solution {
public:
    int f(int pos, string &target, vector<vector<string>>& items) {
        int ret = 0;
        for(auto &item: items) {
            if(target == item[pos]) ret += 1;
        }
        return ret;
    }
    
    int getPos(char ch) {
        if(ch == 't') return 0;
        else if(ch == 'c') return 1;
        return 2;
    }
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        return f(getPos(ruleKey[0]), ruleValue, items);
    }
};