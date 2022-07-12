class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size(), m = num2.size();
        
        vector <int> v(n + m, 0);
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1; j >= 0; j--) {
                v[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
                v[i+j] += v[i+j+1] / 10;
                v[i+j+1] %= 10; 
            }
        }
        
        int id = 0;
        n += m;
        for(; id < n && v[id] == 0; id++) {}
        
        string res;
        for(; id < n; id++) res += to_string(v[id]);
        return res == "" ? "0" : res;
    }
};