class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ret = 0;
        for(auto &x: details) {
            if(x[11] > '6' or (x[11] == '6' and x[12] > '0')) ret += 1;
        }
        return ret;
    }
};