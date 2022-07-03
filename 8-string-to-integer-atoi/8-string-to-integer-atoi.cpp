class Solution {
public:
    int myAtoi(string s) {
        
        int index = 0;
        while(isspace(s[index])) {
            index += 1;
        }
        
        long int mult = 1;
        long int res = 0;
        
        if(s[index] == '-') {
            mult = -1;
            index += 1;
        } else if(s[index] == '+') {
            index += 1;
        } else if(isdigit(s[index]) == false) {
            return 0;
        }
        
        while(index < s.size() && isdigit(s[index])) {
            res *= 10;
            res += mult * (s[index] - '0');
            index += 1;
            if (res > INT_MAX) {
                return INT_MAX;
            }
            
            if (res < INT_MIN) {
                return INT_MIN;
            }
        }
        
        return (int) res;
    }
};