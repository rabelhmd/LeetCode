class Solution {
public:
    
    static bool cmp(vector <int> &a, vector <int> &b) {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& T, int s) {
        sort(T.begin(), T.end(), cmp);
        
        int sum = 0;
        for(auto b: T) {
            int mn = min(s, b[0]);
            sum += mn * b[1];
            s -= mn;
            if(s <= 0) return sum;
        }
        return sum;
    }
};