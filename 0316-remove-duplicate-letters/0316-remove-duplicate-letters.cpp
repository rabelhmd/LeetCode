class Solution {
public:
    string removeDuplicateLetters(string s) {
        int len = s.size();
        unordered_map<char, int> freq;
        unordered_map<char, bool> vis;
        stack<int> St;
        string ret = "";

        for(char &x: s) freq[x]++;
        for(int i = 0; i < len; i++) {
            freq[s[i]]--;
            if(vis[s[i]]) continue;
            while(!St.empty() &&  s[i] < s[St.top()] && freq[s[St.top()]] > 0) {
                vis[s[St.top()]] = false;
                St.pop();
            }
            St.push(i);
            vis[s[i]] = true;
        }

        while(!St.empty()) {
            ret = s[St.top()] + ret;
            St.pop();
        }
        return ret;
    }
};