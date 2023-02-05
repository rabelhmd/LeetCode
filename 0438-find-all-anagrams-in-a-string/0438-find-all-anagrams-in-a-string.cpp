class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.size(), p_len = p.size();
        if(s_len < p_len) return {};
        
        vector<int> freq(26, 0), window(26, 0);
        for(int i = 0; i < p_len; i++) {
            freq[p[i]-'a'] += 1;
            window[s[i]-'a'] += 1;
        }
        
        vector<int> ret;
        if(freq == window) ret.push_back(0);
        
        for(int i = p_len; i < s_len; i++) {
            window[s[i-p_len] - 'a'] -= 1;
            window[s[i] - 'a'] += 1;
            if(freq == window) ret.push_back(i - p_len+1);
        }
        return ret;
    }
};