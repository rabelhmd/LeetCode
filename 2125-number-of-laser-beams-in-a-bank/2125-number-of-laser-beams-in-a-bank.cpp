class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector <int> v;
        for(auto &b: bank) {
            int c = count(begin(b), end(b), '1');
            if(c) v.push_back(c);
        }
        
        if(v.size() <= 1) return 0;
        int ret = 0;
        for(int i = 0; i < v.size()-1; i++) {
            ret += (v[i] * v[i+1]);
        }
        return ret;
    }
};