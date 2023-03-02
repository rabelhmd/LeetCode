class Solution {
public:
    
    string solve(vector<char>& chars) {
        int count = 1, len = chars.size();
        string ret; ret += chars[0];
        
        for(int i = 1; i < len; i++) {
            if(chars[i] == chars[i-1]) {
                count += 1;
                continue;
            }
            if(count > 1) ret += to_string(count);
            ret += chars[i];
            count = 1;
        }
        if(count > 1) ret += to_string(count);
        return ret;
    }
    
    int compress(vector<char>& chars) {        
        string ret = solve(chars);
        int len = ret.size();
        for(int i = 0; i < len; i++) chars[i] = ret[i];
        return len;
    }
};