class Solution {
public:
    
    bool match(string &a, string &b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a.at(i) != b.at(i) && a.at(i) != '?' && b.at(i) != '?') 
                return false;
        }
        return true;
    }
    
    bool allWild(string &s) {
        for(int i = 0; i < s.size(); i++) {
            if(s.at(i) != '?') return false;
        }
        return true;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        int n = target.size(), m = stamp.size();
        
        vector<int> ans;
        string str ; 
        bool foundMatch = true;
        while(foundMatch) { 
            foundMatch = false;
            
            for(int i=0; i < n-m+1; i++) {
                str = target.substr(i, m);
                if(allWild(str)) {
                    continue; 
                }
                
                if( match(stamp,str) ) {
                    foundMatch = true;
                    ans.push_back(i);
                    for(int j = 0; j < m; j++) {
                        target[i+j] = '?';
                    }
                }
            }
        }
        
        if(!allWild(target) || ans.size() > 10*n)  return {};
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};