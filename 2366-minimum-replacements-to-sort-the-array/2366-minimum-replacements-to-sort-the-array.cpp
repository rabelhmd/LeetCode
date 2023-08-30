#define LL long long 

class Solution {
public:
    LL minimumReplacement(vector<int>& num) {  
        int len = num.size(), r = num[len-1];
        if(len == 1) return 0;
        LL ret = 0;
        for(int i=len-2; i >=0; i--) {
            if(r >= num[i]) r = num[i];
            else {
                int temp = ((num[i]-1)/r)+1;
                r = num[i]/temp;
                ret += (temp-1);
            }       
        }
        return ret;    
    }
};