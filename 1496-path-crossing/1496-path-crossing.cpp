class Solution {
public:
    bool isPathCrossing(string path) {
        map <pair<int, int>, bool> Mp;
        int x = 0, y = 0;
        Mp[{x,y}] = true;
        for(auto &p: path) {
            if(p == 'N') x += 1;
            else if(p == 'S') x -= 1;
            else if(p == 'E') y += 1;
            else if(p == 'W') y -= 1;
            if(Mp.find({x, y}) != Mp.end()) return true;
            Mp[{x, y}] = true;
        }
        return false;
    }
};