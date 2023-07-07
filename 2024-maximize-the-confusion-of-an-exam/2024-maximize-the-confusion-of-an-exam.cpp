class Solution {
public:
    int f(string& str, int& k) {
        char tr = 'T', fa = 'F';
        int tc = 0, fc = 0, tl = 0, fl = 0, ret = 0, len = str.size();
        for(int i = 0; i < len; i++) {
            if(str[i] == tr) tc += 1;
            if(str[i] == fa) fc += 1;
            while(tc > k) if(str[tl++] == tr) tc -= 1;
            while(fc > k) if(str[fl++] == fa) fc -= 1;
            ret = max(ret, i - tl + 1);
            ret = max(ret, i - fl + 1);
        }
        return ret;
    }
    
    int maxConsecutiveAnswers(string str, int k) {
        return f(str, k);
    }
};