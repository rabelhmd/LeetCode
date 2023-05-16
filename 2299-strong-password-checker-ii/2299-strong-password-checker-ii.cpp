class Solution {
public:
    bool isspecial(char ch) {
        string sp = "!@#$%^&*()-+";
        return sp.find(ch) != string::npos;
    }
    
    bool isStrong(string& p) {
        int len = p.size();
        bool has8 = (len >= 8);
        if(!has8) return false;
        
        bool lo = false, up = false, d = false, sp = false;
        for(int i = 0; i < len; i++) {
            if(!lo and islower(p[i])) lo = true;
            if(!up and isupper(p[i])) up = true;
            if(!d and isdigit(p[i])) d = true;
            if(!sp and isspecial(p[i])) sp = true;
            if(i + 1 < len and p[i] == p[i+1]) return false;
        }
        // cout << lo << " " << up << " " << d << " " << sp << " " << adj << endl;
        return lo and up and d and sp;
    }
    
    bool strongPasswordCheckerII(string password) {
        return isStrong(password);
    }
};