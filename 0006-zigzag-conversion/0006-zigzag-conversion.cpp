class Solution {
public:
    string convert(string s, int rows) {
        if(rows <= 1) return s;
        
        vector <string> v(rows, ""); 
        bool move = true;
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            v[j] += s[i];
            if(j == rows - 1) move = false;
            else if(j == 0) move = true;
            j += (move ? 1 : -1);
        }
        
        string ret;
        for(auto &r: v) ret += r;
        return ret;
    }
};