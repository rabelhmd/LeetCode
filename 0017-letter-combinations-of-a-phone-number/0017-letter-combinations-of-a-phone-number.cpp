class Solution {
public:
    
    vector<string> ret;
    string ans;
    string val;
    
    string getVal(int pos) {
        switch (pos) {
            case 2: return "abc";
            case 3: return "def";
            case 4: return "ghi";
            case 5: return "jkl";
            case 6: return "mno";
            case 7: return "pqrs";
            case 8: return "tuv";
            case 9: return "wxyz";
        }
        return "";
    }
    
    void track(string &d, int pos) {
        if(pos >= d.size()) {
            ret.push_back(ans);
            return;
        }
        
        for(auto c: getVal(d[pos]-'0')) {
            ans[pos]=c;
            track(d, pos+1);
        }
    }
    
    vector<string> letterCombinations(string d) {
        if(d.empty()) return {};
        ans.resize(d.size());
        track(d, 0);
        return ret;
    }
};