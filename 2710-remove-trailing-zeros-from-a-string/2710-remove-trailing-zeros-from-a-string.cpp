class Solution {
public:
    string removeTrailingZeros(string num) {
        int len = num.size() - 1;
        while(num[len] == '0') {
            len--;
        }
        return num.substr(0, len+1);
    }
};