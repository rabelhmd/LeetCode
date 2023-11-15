class Solution {
public:
    
    int countPalindromicSubsequence(string s) {
        int len = s.size();
        vector<int>f(26, 1000001), last(26);
        
        for(int i = 0; i < len; i++) {
            int cur = s[i] - 'a';
            f[cur] = min(i, f[cur]);
            last[cur] = i;
        }
        
        int  ret = 0;
        for(int i = 0; i < 26; i++) {
            unordered_set<char> St;
            for(int j = f[i] + 1; j < last[i]; j++) St.insert(s[j]);
            ret += St.size();
        }
      return ret;
    }
};