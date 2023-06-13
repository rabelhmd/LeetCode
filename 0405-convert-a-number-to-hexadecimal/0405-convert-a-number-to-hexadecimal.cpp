class Solution {
public:
    string toHex(int num) {
        if(!num) return "0";
        unsigned int n = num;
        char arr[17] = "0123456789abcdef";
        string ret;
        while(n) {
            ret += arr[n % 16];
            n /= 16;
        }
        return {ret.rbegin(), ret.rend()};
    }
};