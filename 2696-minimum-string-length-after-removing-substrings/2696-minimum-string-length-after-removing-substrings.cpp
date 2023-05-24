class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    int minLength(string s) {
        faster();
        string ret;
        int id = 0;
        for(auto &c: s) {
            ret += c; id += 1;
            if(id > 1) {
                if((ret[id-2] == 'A' and ret[id-1] == 'B') or 
                   (ret[id-2] == 'C' and ret[id-1] == 'D')) {
                    ret.pop_back(), ret.pop_back(); id -= 2;
                }
            } 
        }
        return ret.size();
    }
};