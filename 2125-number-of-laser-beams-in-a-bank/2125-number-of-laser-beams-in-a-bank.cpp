class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector <int> v;
        for(auto &b: bank) {
            int count = 0;
            for(auto &x: b) count += x == '1';
            if(count) v.push_back(count);
        }
        
        if(v.size() <= 1) return 0;
        
        int ret = 0;
        for(int i = 0; i < v.size()-1; i++) {
            ret += (v[i] * v[i+1]);
        }
        return ret;
    }
};