class Solution {
public:
    
    vector<vector<string>> res;
    
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) if (s[l++] != s[r--]) return false;
        return true;
    }
    
    void track(string &s, int pos, vector<string> &cur) {
        int n = s.size();
        
        if(pos == n) {
            res.push_back(cur);
            return;
        }
        
        for(int i = pos; i < n; i++) {
            if(isPalindrome(s, pos, i)) {
                cur.push_back(s.substr(pos, i - pos + 1));
                track(s, i + 1, cur);
                cur.pop_back();
            }
        }
    }

    
    vector<vector<string>> partition(string s) {
        vector<string> cur;
        track(s, 0, cur);
        return res;
    }
};