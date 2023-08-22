class Solution {
public:
    string convertToTitle(int col) {
        string ret;
        while(col) {
            if(col % 26 == 0) {
                ret += "Z";
                col -= 1;
            } else {
                ret += (col % 26 - 1) + 'A';
            }
            col /= 26;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};