class Solution {
public:
    
    bool isStrong(string& p) {
        int len = p.size();
        if(len < 8) return false;
        
        bool lo = false, up = false, d = false, sp = false;
        for(int i = 0; i < len; i++) {
            if(islower(p[i])) lo = true;
            else if(isupper(p[i])) up = true;
            else if(isdigit(p[i])) d = true;
            else sp = true;
            if(i + 1 < len and p[i] == p[i+1]) return false;
        }
        // cout << lo << " " << up << " " << d << " " << sp << " " << adj << endl;
        return lo and up and d and sp;
    }
    
    bool strongPasswordCheckerII(string password) {
        return isStrong(password);
    }
};