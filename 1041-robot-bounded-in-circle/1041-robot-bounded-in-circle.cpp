class Solution {
public:
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
    int getMod(int d) {
        d %= 4;
        d += 4;
        return d % 4;
    }
    
    string circle(string str) {
        return str + str + str + str;
    }
    
    bool isRobotBounded(string ins) {
        ins = circle(ins);
        int x = 0, y = 0, d = 0;
        
        for(auto &c: ins) {
            if(c == 'L' || c == 'R') {
                int p = c == 'L' ? -1 : 1;
                d += p;
                d = getMod(d);
                continue;
            }
            x += dx[d];
            y += dy[d];
        }
        return x == 0 && y == 0;
    }
};