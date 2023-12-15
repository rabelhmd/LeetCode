class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string, string> Mp;
        string origin;
        for(auto &path: paths) {
            if(origin == "") origin = path[0];
            Mp[path[0]] = path[1];
        }
        
        while(Mp.find(origin) != Mp.end()) {
            origin = Mp[origin];
        }
        return origin;
    }
};