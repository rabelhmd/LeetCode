class Solution {
public:
    long long maxRunTime(int c, vector<int>& a) {
        int len = a.size();
        sort(a.rbegin(), a.rend());
        
        long long filler = 0;
        for(int i = c; i < len; i++) {
            filler += a[i];
        }
        
        long long ret = 0;
        for(int i = c-1; i-1 >= 0; i--) {
            long long diff = a[i-1]-a[i];
            long long req = diff * 1ll * (c - i);
            if(filler >= req) {
                filler -= req;
                ret = a[i-1];
            }
            else {
                ret = a[i] + (filler / (c - i));
                return ret;
            }
        }
        ret = a[0] + (filler / c);
        return ret;
    }
};