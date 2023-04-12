class Solution {
public:
    string simplifyPath(string path) {
        stack <string> St;
        
        int len = path.size();
        for(int i = 0; i < len; i++) {
            if(path[i] == '/') continue;
            
            string temp;
            while(i < len and path[i] != '/') temp += path[i++];
            if(temp == ".") continue;
            if(temp == "..") {
                if(!St.empty()) St.pop();
                continue;
            }
            St.push(temp);
        }
        
        string ret;
        while(!St.empty()) {
            ret = "/" + St.top() + ret;
            St.pop();
        }
        
        if(!ret.size()) ret = "/";
        return ret;
    }
};