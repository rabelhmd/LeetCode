class Solution {
public:
    
    bool subsequence(string str, string w) {
        int i = 0, j = 0;
        int len = str.size(), len2 = w.size();
        
        while(i < len && j < len2) {
            if(str[i] == w[j]) {
                i += 1, j += 1;
                continue;
            }
            i += 1;
        }
        return j == w.size();
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        bool flag = false;
        unordered_map<string, bool> Mp;
        
        for(auto w: words) {
            if(Mp.find(w) != Mp.end()) {
                count += Mp[w];
                continue;
            }   
            flag = subsequence(s, w);
            Mp[w] = flag;
            count += flag;
        }
        return count;
    }
};