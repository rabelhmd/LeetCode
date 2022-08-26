class Solution {
public:
    
    bool reorderedPowerOf2(int n) {
        
        unordered_map <string, bool> power;
        for(int i = 0; i <= 30; i++) {
            string str = to_string((int) pow(2, i));
            sort(str.begin(), str.end());
            power[str] = true;
        }
        
        string str = to_string(n);
        sort(str.begin(), str.end());
        return power[str];
    }
};