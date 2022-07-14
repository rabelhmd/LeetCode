class Solution {
public:
    
    int sumDiv(int n) {
        int sum = 0;
        
        for(long long i = 1; i * i <= n; i++) {
            if(n % i == 0 && i != n) {
                sum += i;
                
                if(n / i != i && n / i != n) {
                   sum += n/i;
                }
            }
        }
        
        return sum;
    }
    
    bool checkPerfectNumber(int num) {
        return num == sumDiv(num);
    }
};