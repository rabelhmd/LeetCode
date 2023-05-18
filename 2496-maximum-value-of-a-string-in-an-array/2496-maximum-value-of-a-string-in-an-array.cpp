class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool isOnlyDigit(string &str) {
        for(auto &c: str) if(!isdigit(c)) return false;
        return true;
    }
    
    int maximumValue(vector<string>& strs) {
        faster();
        int ret = 0;
        for(auto &str: strs) {
            int x;
            if(isOnlyDigit(str)) {
                x = stoi(str);
            } else {
               x = str.size();
            }
            ret = max(ret, x);
        }
        return ret;
    }
};