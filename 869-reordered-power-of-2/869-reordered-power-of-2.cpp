class Solution {
public:
    
    string dp[30] = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536", "131072", "262144", "524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912"};
    
    unordered_map<string, bool> Mp;
    void applyMap() {
        for(auto &x: dp) Mp[x] = true;
    }
    
    string genStr(int n) {
        string str;
        while(n) {
            str += (n%10) + '0';
            n/= 10;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    
    bool reorderedPowerOf2(int n) {
        applyMap();
        string str = genStr(n);
        sort(str.begin(), str.end());
        
        do {
            if(str[0] != '0' && Mp[str]) {
                return true;
            }
        }while(next_permutation(str.begin(), str.end()));
        
        return false;
    }
};