class Solution {
public:
    int number[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string roman[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    
    string intToRoman(int num) {
        string ret = "";
        for(int i = size(number)-1; i >= 0; i--) {
            int cur = num / number[i];
            num %= number[i];
            while(cur--) {
                ret += roman[i];
            }
        }
        return ret;
    }
};