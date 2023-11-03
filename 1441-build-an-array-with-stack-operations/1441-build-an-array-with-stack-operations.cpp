class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ret;
        int cur = 1; 
        for(auto &x: target) {
            while(cur != x) {
                ret.push_back("Push");
                ret.push_back("Pop");
                cur += 1;
            }
            ret.push_back("Push");
            cur += 1;
        }
        return ret;
    }
};