class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector <int> visit(n, 0), ret;
        int c = 0, step = k;
        while(!visit[c]) {
            visit[c] = 1;
            c = (c + step) % n;
            step += k;
        }
        
        for(int i = 0; i < n; i++) {
            if(!visit[i]) ret.push_back(i + 1);
        }
        return ret;
    }
};