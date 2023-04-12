class Solution {
public:
    string simplifyPath(string path) {
        for(auto &x: path) if(x == '/') x = ' ';
        
        stringstream ss(path);
        string word;
        vector <string> v;
        while(ss >> word) {
            if(word == ".") continue;
            if(word == "..") {
                if(v.empty()) continue;
                v.pop_back(); continue;
            }
            v.push_back(word);
        }
        
        string ret = "/";
        for(auto &x: v) ret += (x + "/");
        if(ret.back() == '/' && ret.size() > 1) ret.pop_back();
        return ret;
    }
};