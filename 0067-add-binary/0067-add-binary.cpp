class Solution {
public:
    string addBinary(string a, string b) {
        int aLen = a.size() - 1;
        int bLen = b.size() - 1;
        int sum = 0;
        
        string ret;
        while(aLen >= 0 or bLen >= 0 or sum == 1) {
            sum += (aLen >= 0 ? a[aLen] - '0' : 0);
            sum += (bLen >= 0 ? b[bLen] - '0' : 0);
            ret = char(sum % 2 + '0') + ret;
            sum /= 2;
            aLen -= 1, bLen -= 1;
        }
        return ret;
    }
};
