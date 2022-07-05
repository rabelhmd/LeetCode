class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.size();
        while(len) {
            int cur = num[len-1] - '0';
            if(cur & 1) return num;
            num.pop_back();
            len--;
        }
        return num;
    }
};