class Solution {
public:
    vector<vector<int>> ret;
    void track(int n, int k, int begin, vector <int> &cur) {
        if(begin > n) {
            if(cur.size() == k) ret.push_back(cur);
            return;
        }
        if(cur.size() > k) return;
        cur.push_back(begin);
        track(n, k, begin+1, cur);
        cur.pop_back();
        track(n, k, begin+1, cur);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector <int> cur;
        track(n, k, 1, cur);
        return ret;
    }
};