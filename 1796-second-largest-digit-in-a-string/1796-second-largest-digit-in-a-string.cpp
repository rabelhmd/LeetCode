class Solution {
public:
    int secondHighest(string s) {
        string res;
        
        for(auto &c: s) if(isdigit(c)) res += c;
        if(res == "") return -1;
        
        sort(res.rbegin(), res.rend());
        int len = res.size(), id = 0;
        while(id < len && res[id] == res[0]) id += 1;
        
        if(id < len) return res[id] - '0';
        
        return -1;
    }
};