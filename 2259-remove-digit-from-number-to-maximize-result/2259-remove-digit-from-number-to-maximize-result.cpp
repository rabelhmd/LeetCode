class Solution {
public:
    string removeDigit(string number, char digit) {
        
        int id = number.find(digit);
        string str = number.substr(0, id), cur;
        if(str == "") str = number.substr(id+1);
        
        for(int i = 0; i < number.size(); i++) {
            if(number[i] == digit) {
                cur = number.substr(0, i) + number.substr(i+1);
                if(cur > str) str = cur;
            }
        }
        
        return str;
    }
};