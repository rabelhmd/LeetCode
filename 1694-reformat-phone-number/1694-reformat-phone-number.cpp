class Solution {
public:
    string reformatNumber(string number) {
        string str;
        for(auto x: number) {
            if(isdigit(x)) {
                str += x;
            }
        }
        
        vector <string> v;
        while(str.size() > 4) {
            v.push_back(str.substr(0, 3));
            str = str.substr(3);
        }
        
        if(str.size() == 3 || str.size() == 2) {
            v.push_back(str);
        }
        
        if(str.size() == 4) {
            v.push_back(str.substr(0, 2));
            str = str.substr(2);
            v.push_back(str);
        }
        
        string res;
        for(int i = 0; i < v.size(); i++) {
            if(i) res += "-";
            res += v[i];
        }
        
        return res;
    }
};