class Solution {
public:
    string removeDigit(string number, char digit) {
        string str, cur;
        
        int len = number.size();
        for(int i = 0; i < len; i++) {
            if(number[i] == digit) {
                cur = number.substr(0, i) + number.substr(i+1);
                str = max(cur, str);
            }
        }
        
        return str;
    }
};