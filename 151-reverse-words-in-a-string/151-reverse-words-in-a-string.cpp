class Solution {
public:
    
    string reverseWords(string s) {
        stringstream ss(s);
        string ans, w;
        while(ss >> w) ans.insert(0, w + " ");
        if(ans.size() > 0) ans.pop_back();
        return ans;
    }
};