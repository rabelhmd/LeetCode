class Solution {
public:
    bool isOnlyDigit(string &str) {
        for(auto &c: str) if(!isdigit(c)) return false;
        return true;
    }
    
    int maximumValue(vector<string>& strs) {
        int ret = 0;
        for(auto &str: strs) {
            int x = isOnlyDigit(str) ? stoi(str) : str.size();
            ret = max(ret, x);
        }
        return ret;
    }
};