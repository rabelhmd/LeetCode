class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        if (v.size() == 0) return "";
        int len = v[0].size();
        for(int i = 0; i < len; i++) {
            char ch = v[0][i];            
            for(int j = 1; j < v.size(); j++) {
                string cur = v[j];
                if(i == cur.size() || cur[i] != ch)
                    return v[0].substr(0, i);
            }
        }
        return v[0];
    }
};