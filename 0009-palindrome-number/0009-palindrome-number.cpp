class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool isPalindrome(int x) {
        faster();
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;
        long long rev = 0;
        int temp = x;
        while(temp) {
            rev = rev * 10 + (temp%10);
            temp /= 10;
        }
        return x == rev; 
    }
};