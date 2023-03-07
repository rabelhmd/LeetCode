class Solution {
public:
    string mostCommonWord(string para, vector<string>& banned) {
        unordered_map <string, int> Mp;
        
        int len = para.size();
        for(int i = 0; i < len;) {
            string str;
            while(i < len && isalpha(para[i])) str += tolower(para[i++]);
            while(i < len && !isalpha(para[i])) i += 1;
            Mp[str] += 1;
        }
        
        for(auto &x: banned) Mp[x] = 0;
        int mx = 0;
        string ret;
        for(auto [key, val]: Mp) {
            if(val > mx) {
                mx = val;
                ret = key;
            }
        }
        return ret;
    }
};